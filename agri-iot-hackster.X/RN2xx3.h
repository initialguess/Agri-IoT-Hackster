/* 
 * File:   RN2xx3.h
 * Author: C70348
 *
 * Created on January 15, 2023, 9:41 PM
 */

#ifndef RN2xx3_H
#define	RN2xx3_H

#include "ringBuffer.h"

#ifdef	__cplusplus
extern "C" {
#endif
    
/* Enable print statements for Rx and Tx
 * TODO: add if def's around send to terminal cmds */
#define DEBUG

/* Enable one activation method by commenting out the other */
#define ABP    // Activation By Personalization
//#define OTAA   // Over The Air Activation
    
   
/* Device EUI and Address */
#define HWEUI  "0004A30B00F89B74"    
#define DEVEUI "70B3D57ED005A81A"
#define DEVADDR "260C7D8D"
    
/* ABP Session Keys */
#define NWKSKEY "1B1FCA3D4F04971EC4D91F04F09C8677"
#define APPSKEY "164F87206406F235B4ECE031AC408CE7"
   
/* OTAA Session Keys */
#define APPEUI "0000000000000000"
#define APPKEY "5029B788B0257F2A2419BA39DA3933A7" 

/* LR2 Command and Response Strings Maximum Size */
#define RN2xx3_BUFFER_SIZE            255
    
/* Port Designations */
#define PORT_CNF    "10"
#define PORT_UNCNF  "11"      
    
    void RN2xx3_resp(void);
    void RN2xx3_resp2(void);
    void RN2xx3_cmd(const char *str);
    void RN2xx3_mac_pause(void);
    void RN2xx3_getHWEUI();
    void RN2xx3_init(void);
    void RN2xx3_save(void);
    void RN2xx3_config_OTAA(void);
    void RN2xx3_config_ABP(void);
    void RN2xx3_config_TTN(void);
    void RN2xx3_join_OTAA(void);
    void RN2xx3_join_ABP(void);
    void RN2xx3_join_TTN(void);
    void RN2xx3_tx_cnf(const char *str);
    void RN2xx3_tx_uncnf(const char *str);
    //Searches for STR in the buffer
    //Returns true if found, false if not.
    //bool ringBuffer_find(ring_buffer_t* buffer, const char* str);
    void RN2xx3_get_status();
    void RN2xx3_interface();
    void RN2xx3_sleep(uint32_t ms);
    




#ifdef	__cplusplus
}
#endif

#endif	/* RN2xx3_H */

