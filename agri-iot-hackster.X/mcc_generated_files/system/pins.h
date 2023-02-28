/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  1.0.1
*/

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H_INCLUDED
#define PINS_H_INCLUDED

#include <avr/io.h>
#include "./port.h"

//get/set LoRa_RX aliases
#define LoRa_RX_SetHigh() do { PORTC_OUTSET = 0x2; } while(0)
#define LoRa_RX_SetLow() do { PORTC_OUTCLR = 0x2; } while(0)
#define LoRa_RX_Toggle() do { PORTC_OUTTGL = 0x2; } while(0)
#define LoRa_RX_GetValue() (VPORTC.IN & (0x1 << 1))
#define LoRa_RX_SetDigitalInput() do { PORTC_DIRCLR = 0x2; } while(0)
#define LoRa_RX_SetDigitalOutput() do { PORTC_DIRSET = 0x2; } while(0)
#define LoRa_RX_SetPullUp() do { PORTC_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LoRa_RX_ResetPullUp() do { PORTC_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LoRa_RX_SetInverted() do { PORTC_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define LoRa_RX_ResetInverted() do { PORTC_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LoRa_RX_DisableInterruptOnChange() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LoRa_RX_EnableInterruptForBothEdges() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LoRa_RX_EnableInterruptForRisingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LoRa_RX_EnableInterruptForFallingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LoRa_RX_DisableDigitalInputBuffer() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LoRa_RX_EnableInterruptForLowLevelSensing() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set LoRa_TX aliases
#define LoRa_TX_SetHigh() do { PORTC_OUTSET = 0x1; } while(0)
#define LoRa_TX_SetLow() do { PORTC_OUTCLR = 0x1; } while(0)
#define LoRa_TX_Toggle() do { PORTC_OUTTGL = 0x1; } while(0)
#define LoRa_TX_GetValue() (VPORTC.IN & (0x1 << 0))
#define LoRa_TX_SetDigitalInput() do { PORTC_DIRCLR = 0x1; } while(0)
#define LoRa_TX_SetDigitalOutput() do { PORTC_DIRSET = 0x1; } while(0)
#define LoRa_TX_SetPullUp() do { PORTC_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LoRa_TX_ResetPullUp() do { PORTC_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LoRa_TX_SetInverted() do { PORTC_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define LoRa_TX_ResetInverted() do { PORTC_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LoRa_TX_DisableInterruptOnChange() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LoRa_TX_EnableInterruptForBothEdges() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LoRa_TX_EnableInterruptForRisingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LoRa_TX_EnableInterruptForFallingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LoRa_TX_DisableDigitalInputBuffer() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LoRa_TX_EnableInterruptForLowLevelSensing() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set AIN2 aliases
#define AIN2_SetHigh() do { PORTD_OUTSET = 0x4; } while(0)
#define AIN2_SetLow() do { PORTD_OUTCLR = 0x4; } while(0)
#define AIN2_Toggle() do { PORTD_OUTTGL = 0x4; } while(0)
#define AIN2_GetValue() (VPORTD.IN & (0x1 << 2))
#define AIN2_SetDigitalInput() do { PORTD_DIRCLR = 0x4; } while(0)
#define AIN2_SetDigitalOutput() do { PORTD_DIRSET = 0x4; } while(0)
#define AIN2_SetPullUp() do { PORTD_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define AIN2_ResetPullUp() do { PORTD_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define AIN2_SetInverted() do { PORTD_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define AIN2_ResetInverted() do { PORTD_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define AIN2_DisableInterruptOnChange() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define AIN2_EnableInterruptForBothEdges() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define AIN2_EnableInterruptForRisingEdge() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define AIN2_EnableInterruptForFallingEdge() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define AIN2_DisableDigitalInputBuffer() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define AIN2_EnableInterruptForLowLevelSensing() do { PORTD.PIN2CTRL = (PORTD.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set UART0_RX aliases
#define UART0_RX_SetHigh() do { PORTD_OUTSET = 0x20; } while(0)
#define UART0_RX_SetLow() do { PORTD_OUTCLR = 0x20; } while(0)
#define UART0_RX_Toggle() do { PORTD_OUTTGL = 0x20; } while(0)
#define UART0_RX_GetValue() (VPORTD.IN & (0x1 << 5))
#define UART0_RX_SetDigitalInput() do { PORTD_DIRCLR = 0x20; } while(0)
#define UART0_RX_SetDigitalOutput() do { PORTD_DIRSET = 0x20; } while(0)
#define UART0_RX_SetPullUp() do { PORTD_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define UART0_RX_ResetPullUp() do { PORTD_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define UART0_RX_SetInverted() do { PORTD_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define UART0_RX_ResetInverted() do { PORTD_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define UART0_RX_DisableInterruptOnChange() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define UART0_RX_EnableInterruptForBothEdges() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define UART0_RX_EnableInterruptForRisingEdge() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define UART0_RX_EnableInterruptForFallingEdge() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define UART0_RX_DisableDigitalInputBuffer() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define UART0_RX_EnableInterruptForLowLevelSensing() do { PORTD.PIN5CTRL = (PORTD.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set UART0_TX aliases
#define UART0_TX_SetHigh() do { PORTD_OUTSET = 0x10; } while(0)
#define UART0_TX_SetLow() do { PORTD_OUTCLR = 0x10; } while(0)
#define UART0_TX_Toggle() do { PORTD_OUTTGL = 0x10; } while(0)
#define UART0_TX_GetValue() (VPORTD.IN & (0x1 << 4))
#define UART0_TX_SetDigitalInput() do { PORTD_DIRCLR = 0x10; } while(0)
#define UART0_TX_SetDigitalOutput() do { PORTD_DIRSET = 0x10; } while(0)
#define UART0_TX_SetPullUp() do { PORTD_PIN4CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define UART0_TX_ResetPullUp() do { PORTD_PIN4CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define UART0_TX_SetInverted() do { PORTD_PIN4CTRL  |= PORT_INVEN_bm; } while(0)
#define UART0_TX_ResetInverted() do { PORTD_PIN4CTRL  &= ~PORT_INVEN_bm; } while(0)
#define UART0_TX_DisableInterruptOnChange() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define UART0_TX_EnableInterruptForBothEdges() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define UART0_TX_EnableInterruptForRisingEdge() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define UART0_TX_EnableInterruptForFallingEdge() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define UART0_TX_DisableDigitalInputBuffer() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define UART0_TX_EnableInterruptForLowLevelSensing() do { PORTD.PIN4CTRL = (PORTD.PIN4CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set SW aliases
#define SW_SetHigh() do { PORTF_OUTSET = 0x40; } while(0)
#define SW_SetLow() do { PORTF_OUTCLR = 0x40; } while(0)
#define SW_Toggle() do { PORTF_OUTTGL = 0x40; } while(0)
#define SW_GetValue() (VPORTF.IN & (0x1 << 6))
#define SW_SetDigitalInput() do { PORTF_DIRCLR = 0x40; } while(0)
#define SW_SetDigitalOutput() do { PORTF_DIRSET = 0x40; } while(0)
#define SW_SetPullUp() do { PORTF_PIN6CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define SW_ResetPullUp() do { PORTF_PIN6CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define SW_SetInverted() do { PORTF_PIN6CTRL  |= PORT_INVEN_bm; } while(0)
#define SW_ResetInverted() do { PORTF_PIN6CTRL  &= ~PORT_INVEN_bm; } while(0)
#define SW_DisableInterruptOnChange() do { PORTF.PIN6CTRL = (PORTF.PIN6CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define SW_EnableInterruptForBothEdges() do { PORTF.PIN6CTRL = (PORTF.PIN6CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define SW_EnableInterruptForRisingEdge() do { PORTF.PIN6CTRL = (PORTF.PIN6CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define SW_EnableInterruptForFallingEdge() do { PORTF.PIN6CTRL = (PORTF.PIN6CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define SW_DisableDigitalInputBuffer() do { PORTF.PIN6CTRL = (PORTF.PIN6CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define SW_EnableInterruptForLowLevelSensing() do { PORTF.PIN6CTRL = (PORTF.PIN6CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set LoRa_CTS aliases
#define LoRa_CTS_SetHigh() do { PORTA_OUTSET = 0x1; } while(0)
#define LoRa_CTS_SetLow() do { PORTA_OUTCLR = 0x1; } while(0)
#define LoRa_CTS_Toggle() do { PORTA_OUTTGL = 0x1; } while(0)
#define LoRa_CTS_GetValue() (VPORTA.IN & (0x1 << 0))
#define LoRa_CTS_SetDigitalInput() do { PORTA_DIRCLR = 0x1; } while(0)
#define LoRa_CTS_SetDigitalOutput() do { PORTA_DIRSET = 0x1; } while(0)
#define LoRa_CTS_SetPullUp() do { PORTA_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LoRa_CTS_ResetPullUp() do { PORTA_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LoRa_CTS_SetInverted() do { PORTA_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define LoRa_CTS_ResetInverted() do { PORTA_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LoRa_CTS_DisableInterruptOnChange() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LoRa_CTS_EnableInterruptForBothEdges() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LoRa_CTS_EnableInterruptForRisingEdge() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LoRa_CTS_EnableInterruptForFallingEdge() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LoRa_CTS_DisableDigitalInputBuffer() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LoRa_CTS_EnableInterruptForLowLevelSensing() do { PORTA.PIN0CTRL = (PORTA.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set LoRa_RST aliases
#define LoRa_RST_SetHigh() do { PORTA_OUTSET = 0x2; } while(0)
#define LoRa_RST_SetLow() do { PORTA_OUTCLR = 0x2; } while(0)
#define LoRa_RST_Toggle() do { PORTA_OUTTGL = 0x2; } while(0)
#define LoRa_RST_GetValue() (VPORTA.IN & (0x1 << 1))
#define LoRa_RST_SetDigitalInput() do { PORTA_DIRCLR = 0x2; } while(0)
#define LoRa_RST_SetDigitalOutput() do { PORTA_DIRSET = 0x2; } while(0)
#define LoRa_RST_SetPullUp() do { PORTA_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LoRa_RST_ResetPullUp() do { PORTA_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LoRa_RST_SetInverted() do { PORTA_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define LoRa_RST_ResetInverted() do { PORTA_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LoRa_RST_DisableInterruptOnChange() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LoRa_RST_EnableInterruptForBothEdges() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LoRa_RST_EnableInterruptForRisingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LoRa_RST_EnableInterruptForFallingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LoRa_RST_DisableDigitalInputBuffer() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LoRa_RST_EnableInterruptForLowLevelSensing() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set LoRa_RTS aliases
#define LoRa_RTS_SetHigh() do { PORTC_OUTSET = 0x4; } while(0)
#define LoRa_RTS_SetLow() do { PORTC_OUTCLR = 0x4; } while(0)
#define LoRa_RTS_Toggle() do { PORTC_OUTTGL = 0x4; } while(0)
#define LoRa_RTS_GetValue() (VPORTC.IN & (0x1 << 2))
#define LoRa_RTS_SetDigitalInput() do { PORTC_DIRCLR = 0x4; } while(0)
#define LoRa_RTS_SetDigitalOutput() do { PORTC_DIRSET = 0x4; } while(0)
#define LoRa_RTS_SetPullUp() do { PORTC_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LoRa_RTS_ResetPullUp() do { PORTC_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LoRa_RTS_SetInverted() do { PORTC_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define LoRa_RTS_ResetInverted() do { PORTC_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LoRa_RTS_DisableInterruptOnChange() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LoRa_RTS_EnableInterruptForBothEdges() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LoRa_RTS_EnableInterruptForRisingEdge() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LoRa_RTS_EnableInterruptForFallingEdge() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LoRa_RTS_DisableDigitalInputBuffer() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LoRa_RTS_EnableInterruptForLowLevelSensing() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set LoRa_RESET aliases
#define LoRa_RESET_SetHigh() do { PORTD_OUTSET = 0x2; } while(0)
#define LoRa_RESET_SetLow() do { PORTD_OUTCLR = 0x2; } while(0)
#define LoRa_RESET_Toggle() do { PORTD_OUTTGL = 0x2; } while(0)
#define LoRa_RESET_GetValue() (VPORTD.IN & (0x1 << 1))
#define LoRa_RESET_SetDigitalInput() do { PORTD_DIRCLR = 0x2; } while(0)
#define LoRa_RESET_SetDigitalOutput() do { PORTD_DIRSET = 0x2; } while(0)
#define LoRa_RESET_SetPullUp() do { PORTD_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LoRa_RESET_ResetPullUp() do { PORTD_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LoRa_RESET_SetInverted() do { PORTD_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define LoRa_RESET_ResetInverted() do { PORTD_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LoRa_RESET_DisableInterruptOnChange() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LoRa_RESET_EnableInterruptForBothEdges() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LoRa_RESET_EnableInterruptForRisingEdge() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LoRa_RESET_EnableInterruptForFallingEdge() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LoRa_RESET_DisableDigitalInputBuffer() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LoRa_RESET_EnableInterruptForLowLevelSensing() do { PORTD.PIN1CTRL = (PORTD.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set LED aliases
#define LED_SetHigh() do { PORTF_OUTSET = 0x20; } while(0)
#define LED_SetLow() do { PORTF_OUTCLR = 0x20; } while(0)
#define LED_Toggle() do { PORTF_OUTTGL = 0x20; } while(0)
#define LED_GetValue() (VPORTF.IN & (0x1 << 5))
#define LED_SetDigitalInput() do { PORTF_DIRCLR = 0x20; } while(0)
#define LED_SetDigitalOutput() do { PORTF_DIRSET = 0x20; } while(0)
#define LED_SetPullUp() do { PORTF_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED_ResetPullUp() do { PORTF_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED_SetInverted() do { PORTF_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define LED_ResetInverted() do { PORTF_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED_DisableInterruptOnChange() do { PORTF.PIN5CTRL = (PORTF.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED_EnableInterruptForBothEdges() do { PORTF.PIN5CTRL = (PORTF.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED_EnableInterruptForRisingEdge() do { PORTF.PIN5CTRL = (PORTF.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED_EnableInterruptForFallingEdge() do { PORTF.PIN5CTRL = (PORTF.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED_DisableDigitalInputBuffer() do { PORTF.PIN5CTRL = (PORTF.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED_EnableInterruptForLowLevelSensing() do { PORTF.PIN5CTRL = (PORTF.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize();

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PC1 pin. 
 *        This is a predefined interrupt handler to be used together with the PC1_SetInterruptHandler() method.
 *        This handler is called every time the PC1 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PC1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PC1 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PC1 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PC1_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PC0 pin. 
 *        This is a predefined interrupt handler to be used together with the PC0_SetInterruptHandler() method.
 *        This handler is called every time the PC0 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PC0_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PC0 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PC0 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PC0_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PD2 pin. 
 *        This is a predefined interrupt handler to be used together with the PD2_SetInterruptHandler() method.
 *        This handler is called every time the PD2 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PD2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PD2 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PD2 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PD2_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PD5 pin. 
 *        This is a predefined interrupt handler to be used together with the PD5_SetInterruptHandler() method.
 *        This handler is called every time the PD5 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PD5_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PD5 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PD5 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PD5_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PD4 pin. 
 *        This is a predefined interrupt handler to be used together with the PD4_SetInterruptHandler() method.
 *        This handler is called every time the PD4 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PD4_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PD4 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PD4 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PD4_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PF6 pin. 
 *        This is a predefined interrupt handler to be used together with the PF6_SetInterruptHandler() method.
 *        This handler is called every time the PF6 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PF6_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PF6 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PF6 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PF6_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PA0 pin. 
 *        This is a predefined interrupt handler to be used together with the PA0_SetInterruptHandler() method.
 *        This handler is called every time the PA0 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PA0_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PA0 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PA0 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PA0_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PA1 pin. 
 *        This is a predefined interrupt handler to be used together with the PA1_SetInterruptHandler() method.
 *        This handler is called every time the PA1 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PA1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PA1 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PA1 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PA1_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PC2 pin. 
 *        This is a predefined interrupt handler to be used together with the PC2_SetInterruptHandler() method.
 *        This handler is called every time the PC2 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PC2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PC2 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PC2 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PC2_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PD1 pin. 
 *        This is a predefined interrupt handler to be used together with the PD1_SetInterruptHandler() method.
 *        This handler is called every time the PD1 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PD1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PD1 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PD1 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PD1_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for PF5 pin. 
 *        This is a predefined interrupt handler to be used together with the PF5_SetInterruptHandler() method.
 *        This handler is called every time the PF5 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void PF5_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for PF5 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for PF5 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void PF5_SetInterruptHandler(void (* interruptHandler)(void)) ; 
#endif /* PINS_H_INCLUDED */
