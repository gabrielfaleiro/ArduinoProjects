/*
 * GccApp329pLearning.c
 *
 * Created: 15/05/2019 18:44:47
 * Author : Gabriel Faleiro Rodriguez
 */ 

#define F_CPU 16000000UL // 16 MHz used in util/delay.h
#define MS_BLACK 400

#define SREG    _SFR_IO8(0x3F)

#include <avr/io.h>
#include <util/delay.h> // To use delay functions
#include "avr/iom329p.h"
#include "notes.h"
#include "music.h"

// Hearing Range:
// 20 Hz - 20 kHz

//int setupLed(){
	//// LED_BUILTIN
	//DDRB |= (1 << PB5); // LED on pin PB5 set to OUTPUT
	//
	//return 0;
//}

int main(void)
{
	//setupLed();
	//setupTimer0FreqGen(0);
	
	while(1)
	{		
		tetris();
		//zelda();
		
		//_delay_ms(10);
		//PORTB &= ~(1 << PB5); // LED off
		//_delay_ms(10);
		//PORTB |=  (1 << PB5); // LED on
		//OCR0A = inc255(OCR0A);
	}
}