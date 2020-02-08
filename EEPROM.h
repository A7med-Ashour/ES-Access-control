/* 
 * File:   EEPROM.h
 * Author: A7med.G.Ashour
 *
 * Created on 03 ??????, 2019, 04:04 ?
 */

#ifndef EEPROM_H
#define	EEPROM_H

/* *** PUBLIC INCLUDES *** */
#include "MICRO_CONTROLLER.h"

/* *** PUBLIC CONSTANTS *** */
/* *** PUBLIC DATATYPES *** */

typedef enum {
    EEPROM_INT_ENABLE,
    EEPROM_INT_DISABLE
}tEEPROM_INTERRUPT_STATE;

/* *** PUBLIC VARIABLES *** */
/* *** PUBLIC FUNCTIONS PROTOTYPE *** */

void EEPROM_init(tEEPROM_INTERRUPT_STATE);
void EEPROM_writeByte(tByte address, tByte data);
void EEPROM_readByte(tByte address, tByte *pData);
void EEPROM_write4Bytes(tByte startAddress, tDword data);
void EEPROM_read4Bytes(tByte startAddress , tDword * pData);
void EEPROM_writeStr(tByte startAddress, tByte * pStr);
void EEPROM_readStr(tByte startAddress , tByte * pStr);
#endif	/* EEPROM_H */

