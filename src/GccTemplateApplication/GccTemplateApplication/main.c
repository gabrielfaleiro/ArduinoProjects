/*
 * GccTemplateApplication.c
 *
 * Created: 12/05/2019 22:49:47
 * Author : Gabriel Faleiro Rodríguez
 */ 

#define F_CPU 16000000UL // 16 MHz used in util/delay.h

#include <avr/io.h>
#include <util/delay.h> // To use delay functions

int main(void)
{
	/* Setup */
	DDRB |= 0B00100000;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB |= 0B00100000;
		_delay_ms(500);
		PORTB &= 0B11011111;
		_delay_ms(500);
    }
}

