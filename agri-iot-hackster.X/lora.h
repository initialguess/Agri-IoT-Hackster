/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

#ifndef LORA_H
#define	LORA_H

#include <stdint.h>
#include <string.h>
#include "mcc_generated_files/system/system.h"

#ifdef	__cplusplus
extern "C" {
#endif

    
    
/* Device EUI and Address */    
#define DEVEUI "70B3D57ED0058E3D"
#define DEVADDR "260C6636"
    
/* ABP Session Keys */
#define NWKSKEY "EB0B6CE0489E9A679AB2173CBD44FCA3"
#define APPSKEY "8C00B40CCB3276A4C77E21E37146A845"
   
/* OTAA Session Keys */
#define APPEUI "0000000000000000"
#define APPKEY "8C027FFA452D40B75882EDA8BC0AF5E7"    
 
/* LR2 Click Commands */
#define LR2_CMD_SYS_GET_VER          "sys get ver"
#define LR2_CMD_SYS_RESET            "sys reset"    
#define LR2_CMD_MAC_PAUSE            "mac pause"
#define LR2_CMD_RADIO_SET_WDT        "radio set wdt 0"
#define LR2_ARG_0                    "0"

/* LR2 Join Procedure Type Mode */
#define LR2_JM_OTAA                  "otaa"
#define LR2_JM_ABP                   "abp"

/* LR2 Uplink Payload Type */
#define LR2_PL_CNF                   "cnf "
#define LR2_PL_UNCNF                 "uncnf "

/* LR2 Command and Response Strings Maximum Size */
#define LR2_MAX_DATA_SIZE            256
#define LR2_MAX_TRANSFER_SIZE        384
#define LR2_MAX_CMD_SIZE             64 
#define LR2_MAX_RSP_SIZE             20    
    
/* LR@ Number of Response Indexes */
#define LR2_RESP_COUNT               100

/* LR2 Timer Limit */
#define LR2_TIMER_EXPIRED            50000
    
/* LR2 Mac and Radio Join and Transmit Commands */
#define LR2_MAC_TX                   "mac tx "
#define LR2_JOIN                     "mac join "
#define LR2_RADIO_TX                 "radio tx "
#define LR2_RADIO_RX                 "radio rx "

/* LR2 RX Buffer Size */
#define RX_BUFFER_SIZE               300

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation
    void RN2903_reset(void);

#ifdef	__cplusplus
}
#endif

#endif	/* LORA_H */


