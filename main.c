/*
 * GccApplication1.c
 *
 * Created: 5/9/2019 2:15:56 PM
 * Author : Eswari
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB= 0XFF
    while (1) 
    {
	  PORTB = 0XFF;
	  _delay_ms(100);
	  PORTB = 0X00;
	  _delay_ms(100);	
    }
}

