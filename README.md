[![MCHP](images/microchip.png)](https://www.microchip.com)

# Agricultural IoT with the AVR64DD32 and the RN2xx3 LoRa Module
This example shows how to set up a LoRaWAN end node that monitors temperature, humidity, barometric pressure, and soil moisture and transmits that data every three minutes to an application via The Things Network (TTN).  The node can be placed between 10 meters and up to 5 kilometers meters (in urban environments) from a LoRaWAN gateway. The design demonstrates how an end node even at long range, can be configured to consume very low power/have long battery life, while securely moving valuable data.  The design is scaled easily to capture soil variablity by placing additional nodes throughout an agricultural plot with out needing to add additional gateways or infrastructure.

This demo uses the 915 MHz frequency band suitable for US and Australia based projects, but can be adapted to work in other regions by selecting the an alternate click board and gateway for your region.
## Related Documentation
- [AVR64DD32 Datasheet](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/DataSheets/AVR64DD32-28-Prelim-DataSheet-DS40002315B.pdf)
- [AVD64DD32 Curiosity Nano Hardware User Guide](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/UserGuides/AVR64DD32CNANO-Prel-HW-UserGuide-DS50003323.pdf)
- [Curiosity Nano Base Board Hardware User Guide](https://ww1.microchip.com/downloads/en/DeviceDoc/Curiosity-Nano-Base-for-Click-boards-User-Guide-50002839B.pdf)
- [RN2903 LoRa Technology Transceiver Module Data Sheet](https://ww1.microchip.com/downloads/en/DeviceDoc/50002390E.pdf)
- [RN2903 LoRa Technology Module Command Reference User's Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/40001811A.pdf)
  
## Software Used
- MPLAB® X IDE 6.0.0 or newer [(MPLAB X IDE 6.0)]()
- MPLAB XC8 2.40.0 or newer compiler [(MPLAB XC8 2.40)]()
- MPLAB Code Configurator (MCC) 5.1.9 or newer [(
https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator?utm_source=Hackster&utm_medium=TextLink&utm_campaign=MCU8_MMTCha_avrdd&utm_content=agri-iot-dd-hackster)]()
- MPLAB® Data Visualizer [(MPLAB Data Visualizer)](https://www.microchip.com/en-us/tools-resources/debug/mplab-data-visualizer)

## Hardware Used
- AVR64DD32 CNano
- Curiosity Nano Adapter
- MikroE LR2
- MikroE WeatherClick
- Capacitive Soil Moisture Sensor v2.0
- (Optional) RAKwireless RAK Discover Kit

## Setup - Hardware
Add the components to the Nano Adapter Board, placing the LR2 click on MikroE Bus 2 and the Weather click on MikroE bus 1.  Connect the moisture sensor leads as shown in Figure 1, with the black ground wire connected to the CNano ground pin, the red power wire to VCC, and the yellow analog out wire to PD2 of the CNano.

![Hardware Setup](images/Hardware%20Setup.png)
*Figure 1: Hardware Setup*

Lastly, add a jumper wire between (PA1) and PD1 to allow resetting the the LR2 click.  (PA1) is not connected by default because it connects to an external clock which is not used in this project, this project enables the PD1 pin to drive the reset signal.

## Setup - Software
### End Node Environment Setup
- Download, install and open MPLABX IDE version 6.00 ( or newer)
- Download and install the XC8 C-Compiler version 2.40 (or newer)
- Open the 'avr64dd32-agri-iot-mplab-mcc.X' project as shown in Figure 2.

#### Configuration

#### Option #1:B


#### Option #2:

## Operation


## Summary