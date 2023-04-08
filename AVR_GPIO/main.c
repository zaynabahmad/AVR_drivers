/*
 * main.c
 *
 * Created: 4/7/2023 11:11:18 PM
 *  Author: zaynab
 */ 

#include <xc.h>
#include "GPIO_AVR.h"
#include "AVR_PORTS.h"
#include "TYPES.h"
#define  F_CPU 10000000ul






int main(void)
{
    while(1)
    {
      Bin_Direction(D ,3 ,input);
	  Bin_Direction(C, 2 ,output);
  	  uint8_t Switch_Read=Pin_Read(D ,3);
	  if (!Switch_Read)
	  {
		  Bin_set(C ,2 );
	  }
	  else {
		  Bin_Reset(C ,2);
	  }
	  
    }
}

