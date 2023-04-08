/*
* GPIO_AVR.H
*
*
*
*/

#ifndef GPIO_AVR_H_
#define GPIO_AVR_H_

#include "AVR_IN_OUT.h"
#include "TYPES.h"

void port_Direction (char base ,char state);
void Bin_Direction(char base , char bin , char state);
void Bin_Reset(char base ,char bin);
void Bin_set (char base , char bin );
void Port_Write(char base ,char value);
char Port_Read(char base);
void Pin_Write(char base ,char bin ,char value );
char Pin_Read(char base ,char bin );

#endif /* GPIO_AVR_H_*/