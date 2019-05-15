/*
 * dcmotor.c
 *
 * Created: 5/15/2019 2:10:41 PM
 * Author : Eswari
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	
	DDRB=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTB|=1<<PB0;
		PORTB&=~(1<<PB1);
		_delay_ms(1000);
		PORTB&=~(1<<PB0);
		PORTB|=(1<<PB1);
		_delay_ms(1000);
    }
}

