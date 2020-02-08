/* 
 * File:   PASSWORD.h
 * Author: A7med.G.Ashour
 *
 * Created on 04 ??????, 2019, 07:35 ?
 */

#ifndef PASSWORD_H
#define	PASSWORD_H

/* *** PUBLIC INCLUDES *** */

#include "MICRO_CONTROLLER.h"
/* *** PUBLIC CONSTANTS *** */
/* *** PUBLIC DATATYPES *** */

typedef enum {
    PASSWORD_CORRECT,
    PASSWORD_WRONG
}tPASSWORD_STATE;

/* *** PUBLIC VARIABLES *** */
/* *** PUBLIC FUNCTIONS PROTOTYPE *** */

void PASSWORD_init(tByte * password);
void PASSWORD_read(tByte * pPassword);
tPASSWORD_STATE PASSWORD_check(tByte * password);


#endif	/* PASSWORD_H */

