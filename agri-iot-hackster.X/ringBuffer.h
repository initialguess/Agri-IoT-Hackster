 /*
© [2022] Microchip Technology Inc. and its subsidiaries.

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

#ifndef RINGBUFFER_H
#define	RINGBUFFER_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "mcc_generated_files/system/system.h"    
#include <stdbool.h>
#include <stdint.h>
    
    //Fields Required to Manage a Ring Buffer
    typedef struct {
        char* buffer;
        uint8_t size;
        uint8_t head;
        uint8_t tail;
    } ring_buffer_t;
    
//    typedef struct {
//        ring_buffer_t* tx_buffer;
//        ring_buffer_t* rx_buffer;
//    } buffers_t;
    
    /*Function prototypes*/
    
    //Creates a ringBuffer from a pool of memory
    void ringBuffer_init(ring_buffer_t* rBuffer, char* c, uint8_t size);
    //void buffers_init(buffers_t* rbs, ring_buffer_t* tx_buff, ring_buffer_t* rx_buff);
    void ringBuffer_push(ring_buffer_t* rBuffer, char c);
    void ringBuffer_pushStr(ring_buffer_t* rBuffer, const char *str);
    char ringBuffer_pop(ring_buffer_t* rBuffer);
    uint8_t ringBuffer_count(ring_buffer_t* rBuffer);
    void ringBuffer_reset(ring_buffer_t* rBuffer);
    bool USART0_sendByte(char c);
    void USART0_sendBufferedString(ring_buffer_t* rBuffer);
    void USART0_sendStr(const char* str);


#ifdef	__cplusplus
}
#endif

#endif	/* RINGBUFFER_H */

