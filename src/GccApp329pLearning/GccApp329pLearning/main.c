/*
 * GccApp329pLearning.c
 *
 * Created: 15/05/2019 18:44:47
 * Author : Gabriel Faleiro Rodriguez
 */ 

#define F_CPU 16000000UL // 16 MHz used in util/delay.h
#define TIME 500

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
		_delay_ms(TIME);
		PORTB &= 0B11011111;
		_delay_ms(TIME);
    }
	
	return 0;
}

