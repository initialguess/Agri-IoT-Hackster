


#include "mcc_generated_files/system/system.h"
#include "RN2xx3.h"
#include "ringBuffer.h"
#include <util/delay.h>


/* Memory for Ring Buffer */
static char rx_text[RN2xx3_BUFFER_SIZE];
static char tx_text[RN2xx3_BUFFER_SIZE];

/* Ring Buffer Structures */
ring_buffer_t tx_buffer;
ring_buffer_t rx_buffer;
//buffers_t buffers;

void RN2xx3_resp()
{
    uint8_t recv = 0;
    
    USART0_sendStr("Rx: ");
    while(recv != 1)
    {
        if(UART1__IsRxReady()) {
            ringBuffer_push(&rx_buffer, UART1_Read());
        }

        if(ringBuffer_count(&rx_buffer) && UART0_IsTxReady()) {
            char rx = ringBuffer_pop(&rx_buffer);
            USART0_sendByte(rx);
            if(rx == '\n') {
                recv++;
            }  
        }
    }
    USART0_sendByte('\n');
    _delay_ms(100);   
}

void RN2xx3_resp2()
{
    char rx;
    uint8_t recv = 0;
    
    USART0_sendStr("Rx: ");
    while(recv != 2)
    {
        if(UART1__IsRxReady()) {
            ringBuffer_push(&rx_buffer, UART1_Read());
        }

        if(ringBuffer_count(&rx_buffer) && UART0_IsTxReady()) {
            rx = ringBuffer_pop(&rx_buffer);
            USART0_sendByte(rx);
            if(rx == '\n') {
                recv++;
                if(recv == 1) {
                    USART0_sendStr("Rx: ");
                }
            }  
        }
    }
        USART0_sendByte('\n');
    _delay_ms(500);
}

void RN2xx3_getHWEUI() {
    uint8_t done = 0;
    
    USART0_sendStr("HWEUI: ");
    ringBuffer_pushStr(&tx_buffer, "sys get hweui\r\n");
    //Transmit over the RN2xx3 UART
    while(ringBuffer_count(&tx_buffer))
    {
        if (UART1_IsTxReady())
        {
            UART1_Write(ringBuffer_pop(&tx_buffer));
        }
    }
    
    while(!done)
    {
        if(UART1__IsRxReady()) {
            ringBuffer_push(&rx_buffer, UART1_Read());
        }

        if(ringBuffer_count(&rx_buffer) && UART0_IsTxReady()) {
            char rx = ringBuffer_pop(&rx_buffer);
            if(rx == '\n') {
                done = 1;
            }
            USART0_sendByte(rx);
        }
    }
    _delay_ms(100); 
}

void RN2xx3_cmd(const char *str)
{
    //Print Command to the Terminal for Debug Purposes
    USART0_sendStr("\r\nTx: ");
    USART0_sendStr(str);
  
    //Add the command string to the RN2xx3 txBuffer
    ringBuffer_pushStr(&tx_buffer, str);
    
    //Transmit over the RN2xx3 UART
    for (uint8_t i = 0; str[i] != '\0'; )
    {
        if (ringBuffer_count(&tx_buffer) && UART1_IsTxReady())
        {
            UART1_Write(ringBuffer_pop(&tx_buffer));
            i++;
        }
    }
    _delay_ms(100);
    RN2xx3_resp();
}

void RN2xx3_init()
{
    printf("\nInitializing RN2xx3...\nFirmware: ");
    uint8_t done = 0;
    
    ringBuffer_init(&tx_buffer, &tx_text[0], RN2xx3_BUFFER_SIZE);
    ringBuffer_init(&rx_buffer, &rx_text[0], RN2xx3_BUFFER_SIZE);
        
    //Reset the RN2xx3
    LoRa_RESET_SetLow();
    _delay_ms(300);
    LoRa_RESET_SetHigh();
    _delay_ms(100);         
    LoRa_RTS_SetHigh();

    while(!done)
    {
        if(UART1__IsRxReady()) {
            ringBuffer_push(&rx_buffer, UART1_Read());
        }

        if(ringBuffer_count(&rx_buffer) && UART0_IsTxReady()) {
            char rx = ringBuffer_pop(&rx_buffer);
            USART0_sendByte(rx);
            if(rx == '\n') {
                done++;
            }  
        }
    }
    USART0_sendByte('\n');
    _delay_ms(100);
    
    
#ifdef FACTORY_RESET
    /* Clear all values in EEPROM to re-join with new key over OTAA */
    RN2xx3_cmd("sys factoryRESET\r\n");
#endif
    
    RN2xx3_getHWEUI();
}

void RN2xx3_save(void)
{
    RN2xx3_cmd("mac save\r\n");
    _delay_ms(100);
}

void RN2xx3_set_channel_range() {
    char str[32];
    for(uint8_t i = 0; i < 71; i++) {
        if(i <= 63) {
            sprintf(str, "mac set ch drrange %d 0 3\r\n", i);
            RN2xx3_cmd(str);
        }
        else {
            sprintf(str, "mac set ch drrange %d 4 4\r\n", i);
            RN2xx3_cmd(str);
        } 
    };
}

/* The RN2xx3 firmware is designed to match the LoRaWAN? specification. The 
 * specification describes a 64(+8) channel plan, making the best use of the 
 * available spectrum in the 915 MHz band. However, the reality is that 64(+8) 
 * channel gateways are still expensive. Most trials and prototypes are using 
 * eight-channel gateways, which are cheaper and widely available. If you are 
 * using the RN2903 with default settings (all channels on) and connecting to an
 *  eight-channel gateway, then seven out of eight packets will fall on a 
 * channel that the gateway is not listening to. Seven packets will be dropped 
 * and only one will pass through. This can be easily corrected by using the 
 * mac set ch status in a loop to disable all the unused channels*/
void RN2xx3_disable_unused_channels() {
    char str[32];
    for(uint8_t i = 0; i < 72; i++) {
        if(i >= 8 && i < 16 )  {
            sprintf(str,"mac set ch status %d on\r\n", i);
            RN2xx3_cmd(str);
        }
        else    {
            sprintf(str,"mac set ch status %d off\r\n", i);
            RN2xx3_cmd(str);
        }
    };
}



void RN2xx3_config_ABP() 
{
    USART0_sendStr("\n\nConfiguring RN2xx3 For ABP join\n");
    USART0_sendStr("-----------------------------------------------------------------------\n");
    RN2xx3_cmd("mac set deveui " DEVEUI "\r\n");
    RN2xx3_cmd("mac set devaddr " DEVADDR "\r\n");
    RN2xx3_cmd("mac set appskey " APPSKEY "\r\n");
    RN2xx3_cmd("mac set nwkskey " NWKSKEY "\r\n");
    RN2xx3_cmd("mac set ar on\r\n");
    RN2xx3_cmd("mac set rxdelay1 5000\r\n");
    RN2xx3_cmd("mac set rx2 12 923300000\r\n");
    RN2xx3_cmd("mac set adr on\r\n");
    //RN2xx3_set_channel_range();
    RN2xx3_disable_unused_channels();
    RN2xx3_cmd("mac set dr 4\r\n");
    RN2xx3_cmd("mac save\r\n");
    USART0_sendStr("\n");
    _delay_ms(100);
    
}
/* Only DEVEUI, APPKEY, and APPEUI are necessary for OTAA, but DEVADDR, APPSKEY,
 * and NWKSKEY are cleared.  When registering devices on TTN, the HWEUI was used
 * as DEVEUI for OTAA.  
 */
void RN2xx3_config_OTAA()
{
    USART0_sendStr("\n\nConfiguring RN2xx3 For OTAA join\n");
    USART0_sendStr("-----------------------------------------------------------------------\n");
    
    /* Temporarily pause the LoRaWAN stack to configure radio as OTAA join only
     * works with spreading factors below sf12 in US
     */
    RN2xx3_cmd("mac pause\r\n");
    RN2xx3_cmd("mac resume\r\n");  
    RN2xx3_cmd("mac set deveui " HWEUI "\r\n");
    RN2xx3_cmd("mac set devaddr 00000000\r\n");
    RN2xx3_cmd("mac set appskey 00000000000000000000000000000000\r\n");
    RN2xx3_cmd("mac set nwkskey 00000000000000000000000000000000\r\n");
    RN2xx3_cmd("mac set appkey " APPKEY "\r\n");
    RN2xx3_cmd("mac set appeui " APPEUI "\r\n");
    RN2xx3_cmd("mac set ar on\r\n");
    RN2xx3_cmd("mac set rxdelay1 5000\r\n");
    RN2xx3_cmd("mac set rx2 12 923300000\r\n");
    RN2xx3_cmd("mac set adr on\r\n");
    RN2xx3_disable_unused_channels();
    RN2xx3_cmd("mac set dr 4\r\n");
    RN2xx3_cmd("mac save\r\n");
    USART0_sendStr("\n");
    _delay_ms(100);  
}

void RN2xx3_config_TTN(void)
{
#ifdef OTAA
    RN2xx3_config_OTAA();
#endif
    
#ifdef ABP
    RN2xx3_config_ABP();
#endif
}
void RN2xx3_join_OTAA() 
{
    USART0_sendStr("\n\nJoining TTN with OTAA\n");
    USART0_sendStr("-----------------------------------------------------------------------\n");

    //For debug purposes, prints the command on the terminal
    USART0_sendStr("Tx: mac join otaa\n");
    
    //Add the command string to the RN2xx3 txBuffer
    ringBuffer_pushStr(&tx_buffer, "mac join otaa\r\n");
       
    //Transmit join request over the RN2xx3 UART
    while(ringBuffer_count(&tx_buffer))
    {
        if(UART1_IsTxReady())
        {
            UART1_Write(ringBuffer_pop(&tx_buffer));
        }
    }
    _delay_ms(100);
    RN2xx3_resp2();
}

void RN2xx3_join_ABP()
{
    /* For debug purposes, prints the command on the terminal */
    USART0_sendStr("\n\nJoining TTN with ABP\n");
    USART0_sendStr("-----------------------------------------------------------------------\n");
    USART0_sendStr("Tx: mac join abp\n");
    
    /* Add the command string to the RN2xx3 txBuffer */
    ringBuffer_pushStr(&tx_buffer, "mac join abp\r\n");
       
    /* Transmit join request over the RN2xx3 UART */
    while(ringBuffer_count(&tx_buffer))
    {
        if(UART1_IsTxReady())
        {
            UART1_Write(ringBuffer_pop(&tx_buffer));
        }
    }
    _delay_ms(10);
    
    // Joining over ABP does not require response from the TTN Join Server, the
    // RN2xx3 will respond with ok, then accepted after making sure necessary
    // keys are stored in EEPROM.  resp2() is called to receive both responses.
    RN2xx3_resp2();
}

void RN2xx3_join_TTN()
{
#ifdef OTAA
    RN2xx3_join_OTAA();
#endif
    
#ifdef ABP
    RN2xx3_join_ABP();
#endif
    RN2xx3_save();
    printf("\nPress button to transmit data\n");
}

void RN2xx3_tx_cnf(const char *str)
{
    /* For debug purposes, prints the command on the terminal */
    USART0_sendStr("\n\nTransmitting Data\n");
    USART0_sendStr("----------------------------------------------------\n");
    USART0_sendStr("\nTx: mac tx cnf " PORT_CNF " ");
    USART0_sendStr(str);
    
    /* Send Transmission to LR2 UART Tx */
    ringBuffer_pushStr(&tx_buffer,"mac tx cnf " PORT_CNF " " );
    ringBuffer_pushStr(&tx_buffer, str);
    
    /* Transmit payload over the RN2xx3 UART */
    while(ringBuffer_count(&tx_buffer))
    {
        if(UART1_IsTxReady())
        {
            UART1_Write(ringBuffer_pop(&tx_buffer));
        }
    }
    _delay_ms(500);
    RN2xx3_resp2();
    RN2xx3_save();
}

void RN2xx3_tx_uncnf(const char *str)
{
    /* For debug purposes, prints the command on the terminal */
    USART0_sendStr("\n\nTransmitting Data\n");
    USART0_sendStr("----------------------------------------------------\n");
    USART0_sendStr("\nTx: mac tx uncnf " PORT_UNCNF " ");
    USART0_sendStr(str);

    //Send Transmission to LR2 UART Tx
    ringBuffer_pushStr(&tx_buffer,"mac tx uncnf " PORT_UNCNF " ");
    ringBuffer_pushStr(&tx_buffer, str);
    
    /* Transmit payload over the RN2xx3 UART */
    while(ringBuffer_count(&tx_buffer))
    {
        if(UART1_IsTxReady())
        {
            UART1_Write(ringBuffer_pop(&tx_buffer));
        }
    }
    _delay_ms(100);
    RN2xx3_resp2();
    RN2xx3_save();
}

void RN2xx3_get_status()
{
    uint8_t recv = 0;
    const char* str = "mac get status\r\n";
    
    //Print Command to the Terminal for Debug Purposes
    USART0_sendStr("\r\nTx: ");
    USART0_sendStr(str);
    
    //Add the command string to the RN2xx3 txBuffer
    ringBuffer_pushStr(&tx_buffer, str);
    
    //Transmit over the RN2xx3 UART
    for (uint8_t i = 0; str[i] != '\0'; )
    {
        if (ringBuffer_count(&tx_buffer) && UART1_IsTxReady())
        {
            UART1_Write(ringBuffer_pop(&tx_buffer));
            i++;
        }
    }
    _delay_ms(100);
    
    USART0_sendStr("Rx: ");
    while(recv != 1)
    {
        if(UART1__IsRxReady()) {
            ringBuffer_push(&rx_buffer, UART1_Read());
        }

        if(ringBuffer_count(&rx_buffer) && UART0_IsTxReady()) {
            char rx = ringBuffer_pop(&rx_buffer);
            USART0_sendByte(rx);
            if(rx == '\n') {
                recv++;
            }  
        }
    }
    USART0_sendByte('\n');
    _delay_ms(500); 
}

void RN2xx3_interface() 
{
        if(UART0__IsRxReady()) {
            ringBuffer_push(&tx_buffer, UART0_Read());
        }    
        if(UART1__IsRxReady()) {
            ringBuffer_push(&rx_buffer, UART1_Read());
        }
        if(ringBuffer_count(&rx_buffer) && UART0_IsTxReady()) {
            UART0_Write(ringBuffer_pop(&rx_buffer));
        }
        if(ringBuffer_count(&tx_buffer) && UART1_IsTxReady()) {
            UART1_Write(ringBuffer_pop(&tx_buffer));
        }
    
}

void RN2xx3_sleep(uint32_t ms)
{
    /* Add sleep command to the buffer */
    ringBuffer_pushStr(&tx_buffer,"sys sleep 180000");
    //ringBuffer_pushStr(&tx_buffer, ms);
    
    /* Transmit the sleep command */
    while(ringBuffer_count(&tx_buffer))
    {
        if(UART1_IsTxReady())
        {
            UART1_Write(ringBuffer_pop(&tx_buffer));
        }
    }
}
