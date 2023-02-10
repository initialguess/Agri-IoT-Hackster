#include "ringBuffer.h"
#include "RN2xx3.h"


void ringBuffer_init(ring_buffer_t* rb, char* c, uint8_t size) 
{
    rb->buffer = c;
    rb->size = size;
    rb->head = 0;
    rb->tail = 0;
}

//void buffers_init(buffers_t* rbs, ring_buffer_t* tx_buff, ring_buffer_t* rx_buff)
//{
//    rbs->tx_buffer = tx_buff;
//    rbs->rx_buffer = rx_buff;
//}

/* Adds a char to the buffer */
void ringBuffer_push(ring_buffer_t* rb, char c) {
    if(rb->tail + 1 != rb->head) {
        rb->buffer[rb->tail] = c;
        rb->tail++;
    }
}

/* Adds a string to the buffer */
void ringBuffer_pushStr(ring_buffer_t* rBuffer, char *str) {
    uint8_t pos = 0;
    char c = str[pos];
    while(rBuffer->tail + 1 != rBuffer->head && c) {
        rBuffer->buffer[rBuffer->tail] = c;
    	rBuffer->tail++;
    	pos++;
    	c = str[pos];
    }
}

/* Gets the first char in the queue, and removes it from the buffer */
char ringBuffer_pop(ring_buffer_t* rBuffer) {
    char ret = rBuffer->buffer[rBuffer->head];
	rBuffer->head++;
	return ret;
}

/* Returns the number of items in the buffer */
uint8_t ringBuffer_count(ring_buffer_t* rBuffer) {
	return rBuffer->head - rBuffer->tail;
}

void ringBuffer_reset(ring_buffer_t* rBuffer) {
    rBuffer->tail = 0;
    rBuffer->head = 0;
    for(int i = 0; i < 256; i++) 
    {
        rBuffer->buffer[i] = '\0';
    }
}

//Sends a byte of data
bool USART0_sendByte(char c)
{
    if (UART0_IsTxReady())
    {
        //Clear done bit
        USART0.STATUS |= USART_TXCIF_bm;

        //Load Byte of Data
        USART0.TXDATAL = c;
        return true;
    }
    return false;
}

//Prints the string on the USART0
void USART0_sendBufferedString(ring_buffer_t* rBuffer)
{   
    if (rBuffer->buffer[0] == '\0')
        return;
    
    uint8_t index = 0;
    
    //Clear USART Done Flag
    USART0.STATUS |= USART_TXCIF_bm;
    
    while ((rBuffer->buffer[index] != '\0') && (index < 255))
    {
        while (!UART0_IsTxReady());
        
        USART0_sendByte(rBuffer->buffer[index]);
        index++;
    }
    
    //Wait for completion of UART
    while (UART0_IsTxDone());
}
//Sends a constant string to the USART Driver
void USART0_sendStr(const char* str)
{
    uint8_t index = 0;
    while (str[index] != '\0')
    {
        if (UART0_IsTxReady())
        {
            USART0_sendByte(str[index]);
            index++;
        }
    }
}