/*
 * pwmtimer.c
 *
 * Created: 5/15/2019 11:33:26 AM
 * Author : Eswari
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);
}


int main(void)
{
	unsigned char duty;
	PWM_init();
    /* Replace with your application code */
    while (1) 
    {
	for(duty=0;duty<255;duty++)
	{
		OCR0=duty;
		_delay_ms(8);
	}
	for(duty=255;duty>1;duty--)
	{
		OCR0=duty;
		_delay_ms(8);
	}
    }
}

