/*
 * GccApp329pLearning.c
 *
 * Created: 15/05/2019 18:44:47
 * Author : Gabriel Faleiro Rodriguez
 */ 

#define F_CPU 16000000UL // 16 MHz used in util/delay.h

#include <avr/io.h>
#include <util/delay.h> // To use delay functions

int main(void)
{
	
	DDRB |= 0B00100000;
	
	/* PORTs
	 * PORTB: (PB7:0) is an 8-bit bi-directional I/O port with internal pull-up resistors 
	 * PORTC: (PC5:0) is a 7-bit bi-directional I/O port with internal pull-up resistors
	 *        PC6/RESET-
	 * PORTD: (PD7:0) 
	 * 
	 */
	PORTB |= 0B00100000;
	
	
    /* Replace with your application code */
    while (1) 
    {
    }
	
	return 0;
}

