/* 
* GPIO_AVR.C
*
*
**/

#include "GPIO_AVR.h"


void port_Direction (char base ,char state)
{
	if(state ==output)
	(*(volatile unsigned char *)(base+1))=0xff;
	else
	(*(volatile unsigned char *)(base+1))=0x00;
}

void Bin_Direction(char base , char bin , char state)
{
	if(state ==output)
	(*(volatile unsigned char *)(base+1))|=(1<<bin); //put 1
	else
	(*(volatile unsigned char *)(base+1)) &=~(1<<bin); //put0
}


void Bin_Reset(char base ,char bin)
{
	(*(volatile uint8_t *)(base+2 ))&= ~(1<<bin);
}

void Bin_set (char base , char bin )
{
	(*(volatile uint8_t *)(base+2)) |=1<<bin;

}


void Port_Write(char base ,char value)
{
	(*(volatile uint8_t *)(base+2))=value;
}

char Port_Read(char base)
{
	uint8_t result ;
	result =(*(volatile uint8_t *)(base));
	return result;
}


void Pin_Write(char base ,char bin ,char value )
{
	if(value==0)
	(*(volatile uint8_t *)(base+2)) &= ~(1<<bin);
	else
	(*(volatile uint8_t *)(base+2)) |= (1<<bin);
}

char Pin_Read(char base ,char bin )
{
	uint8_t Pin_value;
	Pin_value=(*(volatile uint8_t *) base )&(1<<bin);
	if (Pin_value==0) return 0;
	else return 1;

}

