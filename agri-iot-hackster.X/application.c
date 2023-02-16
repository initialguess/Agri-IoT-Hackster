#include "application.h"
#include <stdio.h>
#include <util/delay.h>
#include "bme280.h"
/**
  Section: Variable Definitions
 */
volatile uint32_t millis = 0;   // counter for elapsed milliseconds (soil pulse)
volatile uint32_t last_millis = 0;
volatile uint32_t secs = 0;     // counter for elapsed seconds (sleep timer)
volatile uint32_t lastsecs = 0; // reference to determine total elapsed time in sec
volatile uint32_t soilSecs = 0;

/* LR2 payload for TTN - String of hex characters representing sensor data */
char payload[15];

/* Moisture */
static soil_moist_t soil;

/* Data structure: measurements from Weather Click and moisture sensor */
static sensor_data_t data;

/* Event Flags for User Interface */
static volatile uint16_t event_flags = 0;

/* State Machine Initial State: Change to test functionality, i.e. TEST_LORA,
 * otherwise define as INIT for normal operations */
static STATE state = INIT;

/* Keep track of the number of transmissions */
static volatile uint8_t numTx = 0;


struct {
    uint16_t min;
    uint16_t max;
} moist_range_t;


/**
  Section: Driver APIs
 */

void BUTTON_debounce(void) {
    if(PORTF.IN & PIN6_bm) {
        // Turn off LED (Active Low))
        LED_SetHigh();
        // 
        event_flags |= UI_BUTTON_FLAG;
        event_flags &= ~SLEEP_TIMER_FLAG;
        
    }
    else
        LED_SetLow();
}

/* Millisecond Timer For Soil Moisture Measurement */
void TIMER_ms(void) {
    millis++;
}

/* 1 sec delay for soil pulse */
void soilPulse(void) {
    static uint32_t loop_cnt = 0;
    loop_cnt++;
    soilSecs = ((millis - last_millis) / 1000UL); 
    if(soilSecs - lastsecs >= 2UL) {
        last_millis = millis;    
    }
}
/*
 * Wakes the MCU
 */
void RTC_PIT_Callback(void) {
    secs++;
}

/* Prints a single raw soil moisture measurement */
void printRawValue() {
    uint16_t val;
    
    val = ADC0_GetConversion(ADC_MUXPOS_AIN2_gc);
    printf("%d\n", val);
}

//Get 100 raw values from soil moisture sensor for calibration
void printRawValues() {
    uint16_t count = 0;
    uint16_t val;
    
    printf("\nAfter 1000 Moisture Readings\n");
    printf("-----------------------------------------------------------------------\n");
    while(count < 1000) {
        val = ADC0_GetConversion(ADC_MUXPOS_AIN2_gc);
        soil.min = (val < soil.min) ? val : IN_MIN;
        soil.max = (val > soil.min) ? val : IN_MAX;
        count++;
    }
    printf("The MAX reading was %d\n", soil.max);
    printf("The MIN reading was %d\n\n", soil.min);
    
    printf("The MAX maps to %d\n", map(soil.max));
    printf("The MIN maps to %d\n", map(soil.min));
}

uint8_t map(uint16_t raw) {    
    float val;
    
    // Account for random sporadic outlier values well out of range
    if(raw > IN_MAX) {
        raw = IN_MAX;
    }
    if(raw < IN_MIN) {
        raw = IN_MIN;
    }
    
    val = (raw - IN_MIN) * CONVERSION_PERCENT;

    return 100 - (uint8_t) val;
}

uint8_t getMoistureMeasurement() {
    uint16_t val = ADC0_GetConversion(ADC_MUXPOS_AIN2_gc);
    return map(val);    
}

void BME280_readSensors(void) {
    if (DEFAULT_SENSOR_MODE == BME280_FORCED_MODE) {
        BME280_startForcedSensing();
    }
    BME280_readMeasurements();
}
//uint8_t getBatteryLevel()   {
//    //For Testing Purposes loses 1% every 10 Tx's TODO: create better calculation
//    uint16_t level = 100 - (numTx / 10); 
//    return level;
//}

//Gets Data from the Weather Click and Soil Moisture Sensor
void getSensorData(sensor_data_t *data)
{
    BME280_readSensors();

    data->temp = (int8_t) BME280_getTemperature();
    data->press = BME280_getPressure() / 10;
    data->humid = (uint8_t) BME280_getHumidity();
    data->moist = getMoistureMeasurement();
    //data->battery = 100;
    //data->numTx = numTx;
    
#ifdef DEBUG
    printSensorData(data); //To compare and demonstrate successful transmission
#endif
    
}
/*
 * For Debug Purposes, prints retrieved data
 */
void printSensorData(sensor_data_t *data)
{
    USART0_sendStr("\n\nCurrent Sensor Data\n");
    USART0_sendStr("-----------------------------------------------------------------------\n");
    
    printf("Relative Humidity: %u%% \r\n", data->humid);
    printf("Moisture: %u%% \r\n", data->moist);
    printf("Pressure: %u hPa\r\n", data->press * 10);
    printf("Temperature: %i C \r\n", data->temp);
    printf("\nJSON Format\r\n");
    printf("-----------------------------------------------------------------------\n");
    printf("Payload: { temp: %i, humidity: %u, moisture: %u, pressure: %u\r\n\n}", 
            data->temp,
            //data->battery,
            data->humid, 
            data->moist, 
            data->press * 10
            );
}

/**
 * Converts Measurements to a Hex String for LoRa Transmission
 * Temperature, Humidity and Moisture only require 2 hex chars, pressure 
 * requires 4 chars, RN2xx3 payload string is terminated with "\r\n\0"
 */ 
void formatPayload(char *str, sensor_data_t *data) {
        
    char hex[]= "0123456789ABCDEF";
    
    str[0] = hex[((data->temp >> 4) & 0x0F)];
    str[1] = hex[data->temp & 0x0F];
    str[2] = hex[((data->humid >> 4) & 0x0F)];
    str[3] = hex[data->humid & 0x0F];
    str[4] = hex[((data->moist >> 4) & 0x0F)];
    str[5] = hex[data->moist & 0x0F];
    str[6] = hex[((data->press >> 4) & 0x0F)];
    str[7] = hex[data->press & 0x0F];
    str[8] = '\r';
    str[9] = '\n';
    str[10] = '\0';
}

void stateMachine()
{
    //Handle User Button Presses
    if(event_flags & UI_BUTTON_FLAG) {
        switch(state) {

            case TTN_NOT_JOINED:
                LED_SetHigh();
                state = TTN_JOIN;
                break;
            
                /* If a button press occurs during sleep, wake up and send a cnf tx */    
            case SLEEP:
                state = TX_CNF;
                RTC_Stop();
                break;

            case WAIT_FOR_TEST:
                state = TX_CNF;
                break;

            default:
                break;
        }
        event_flags &= ~UI_BUTTON_FLAG;
    }

    switch(state)   {
        case INIT:
            /* Turn off LED begin initialization processes */
            LED_SetHigh();

            /* Initialize the LoRa Module */
            RN2xx3_init();

            /* Initialize the Weather Click */                     
            if(!BME280_init())
            {
                printf("\nWeather Click NOT initialized properly!\n");
            }   
            /* Turn on LED to indicate initialization complete */ 
            LED_SetLow();

            /* Prompt to use interactive terminal or join TTN */
            printf("\nInteractive Terminal is active: commands such as \'sys factoryRESET\' will\n");
            printf("be sent to the RN2xx3 and responses will be appear here.\n");
            printf("\nWhen ready, press button to join TTN\n\n");
            state = TTN_NOT_JOINED;  
            break;

        /* Remain here for a button press, active terminal interface allows user to
           test RN2xx3 state.  sys factoryRESET will reset the RN2xx3 and clear upctr */    
        case TTN_NOT_JOINED:
            RN2xx3_interface();
            break;

        case TTN_JOIN:
            RN2xx3_config_TTN();
            RN2xx3_join_TTN();
#ifdef ABP
            state = TX_CNF;
#endif
            
#ifdef OTAA
            state = TEST_LORA;
#endif
            break;

        case TX_CNF:
            numTx++;
            LED_SetLow();
            /* Gather and format sensor data for transmission */
            getSensorData(&data);
            formatPayload(payload, &data);
            RN2xx3_tx_cnf(payload);
            RTC_Start();
           //RN2xx3_sleep(160000);
            state = SLEEP;
            LED_SetHigh();
            break;

        case SLEEP:
            if(secs == 180) {
                //event_flags &= ~SLEEP_TIMER_FLAG;
                if(numTx % 10 == 0) {
                    state = TX_CNF;
                }
                else {
                    state = TX_UNCNF;
                }
                RTC_Stop();
                secs = 0;
                /* When the RN2xx3 wakes up, it sends an ok or invalid_param */
                //RN2xx3_resp();
            }
            /* Will later remove this when putting RN2xx3 to sleep. for now the 
             * the interactive terminal is active during sleep for testing purposes. */
            RN2xx3_interface();
            break;

        case TX_UNCNF:
            numTx++;
            LED_SetHigh();
            getSensorData(&data);
            formatPayload(payload, &data);
            RN2xx3_tx_uncnf(payload);
            RTC_Start();
            state = SLEEP;
            LED_SetHigh();
            break;

        case TEST_MOISTURE:
            secs = 0;
            printRawValue();;
            
            /* Start the PIT and wait 1 minute */
            RTC_Start();
            state = WAIT_FOR_TEST;
            break;
            
        case TEST_LORA:
            RN2xx3_interface();
            break;

        case TEST_BME280:
            //Initialize Weather Click
            BME280_init();
            //Gather and format sensor data for transmission
            getSensorData(&data);
            printSensorData(&data);
            formatPayload(payload, &data);
            state = WAIT_FOR_TEST;
            break;

        case TEST_LOW_POWER:
            printf("TODO:  Write low power tests...\n");
            state = WAIT_FOR_TEST;
            break;
            
        case TEST_SENSOR_VALUES:
            getSensorData(&data);
            printSensorData(&data);
            state = WAIT_FOR_TEST;
            break;

        case WAIT_FOR_TEST:
            if (secs == 2) {
                RTC_Stop();
                state = TEST_MOISTURE;
            }
            RN2xx3_interface();
            break;
            
        default:
            break;
    }

}

