/*
 * main.c
 *
 * Created: 12/16/2022 9:34:50 PM
 *  Author: zaynab
 */ 

#include <xc.h>
#include<avr\io.h>
#include<util\delay.h>
#define F_CPU 1000000UL
/* a code to turn 4 leds on respectively with time delay of 0.5s between each one*/

int main(void)
{
	DDRC =0b00001111;
	
	while(1)
	{
		for(int i=0; i<=3;i++){
			PORTC |=(1<<i);
			_delay_ms(500);
			if(i==3){
				PORTC&=0;
				_delay_ms(500);
			}
		}
		
	}
}