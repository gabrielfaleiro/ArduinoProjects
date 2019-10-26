/*
 * GccApp329pLearning.c
 *
 * Created: 15/05/2019 18:44:47
 * Author : Gabriel Faleiro Rodriguez
 */ 

#define F_CPU 16000000UL // 16 MHz used in util/delay.h

#define TCCR0B  _SFR_IO8(0x25)
#define SREG    _SFR_IO8(0x3F)

#include <avr/io.h>
#include <util/delay.h> // To use delay functions
#include "avr/iom329p.h"

// Hearing Range:
// 20 Hz - 20 kHz

int setupLed(){
	// LED_BUILTIN
	DDRB |= (1 << PB5); // LED on pin PB5 set to OUTPUT
	
	return 0;
}

int setupTimer0FreqGen(int enInt){
	// Frecuency generator Pin
	DDRD |= 0B01000000; // PD6 set to OUTPUT
	// PD6: OC0A (Timer/Counter0 Output Compare Match A Output) - PWM.
	
	// Set up the timer
	PRR &= 0B11011111; // PRTWI PRTIM2 PRTIM0 – PRTIM1 PRSPI PRUSART0 PRADC
	// Force remove power reduction on counter0 to enable the timer
	TCCR0A |= 0B01000010; // COM0A1 COM0A0 COM0B1 COM0B0 – – WGM01 WGM00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// TODO: check prescaler config CS0x
	
	if (enInt){
		// Handle Timer interruption flags - Activate when handling them
		SREG |= 0B10000000; //  I T H S V N Z C
		// Global interupts enabled
		TIMSK0 |= 0B00000010; // – – – – – OCIE0B OCIE0A TOIE0
		//TIFR0 |= 0B00000000; // – – – – – OCF0B OCF0A TOV0
	}
	
	return 0;
}

int inc255(int val){
	if (val > 255){
		val = 0;
	}
	else{
		val++;
	}
	return val;
}

int main(void)
{
	setupLed();
	setupTimer0FreqGen(0);
	OCR0A = 0x49; // 73 in decimal
	
	while(1)
	{
		_delay_ms(10);
		PORTB &= ~(1 << PB5); // LED off
		_delay_ms(10);
		PORTB |=  (1 << PB5); // LED on
		OCR0A = inc255(OCR0A);
	}
}