/* 
 * File:   KPAD.h
 * Author: A7med.G.Ashour
 *
 * Created on 01 ??????, 2019, 09:25 ?
 */

#ifndef KPAD_H
#define	KPAD_H

/* *** PUBLIC INCLUDES *** */
#include "MICRO_CONTROLLER.h"

/* *** PUBLIC CONSTANTS *** */
#define     NULL_KEY                (0)
/* *** PUBLIC DATATYPES *** */
/* *** PUBLIC VARIABLES *** */
/* *** PUBLIC FUNCTIONS PROTOTYPE *** */

void KPAD_init(void);
void KPAD_getKey(tByte * );
void KPAD_waitKey(tByte *);

#endif	/* KPAD_H */

