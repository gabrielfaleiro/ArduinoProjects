/*
 * notes.c
 *
 * Created: 29/10/2019 16:51:08
 * Author : Gabriel Faleiro Rodriguez
 */ 

#include "notes.h"

int setupTimer0FreqGen(int enInt){
	// Frecuency generator Pin
	DDRD |= 0B01000000; // PD6 set to OUTPUT
	// PD6: OC0A (Timer/Counter0 Output Compare Match A Output) - PWM.
	
	// Set up the timer
	PRR &= 0B11011111; // PRTWI PRTIM2 PRTIM0 – PRTIM1 PRSPI PRUSART0 PRADC
	// Force remove power reduction on counter0 to enable the timer
	TCCR0A |= 0B01000010; // COM0A1 COM0A0 COM0B1 COM0B0 – – WGM01 WGM00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	
	if (enInt){
		// Handle Timer interruption flags - Activate when handling them
		SREG |= 0B10000000; //  I T H S V N Z C
		// Global interupts enabled
		TIMSK0 |= 0B00000010; // – – – – – OCIE0B OCIE0A TOIE0
		//TIFR0 |= 0B00000000; // – – – – – OCF0B OCF0A TOV0
	}
	
	return 0;
}

int c3(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 250;
	//_delay_ms(mSeconds); 
	return 0;
}

int d3(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 222;
	//_delay_ms(mSeconds); 
	return 0;
}

int e3(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 198;
	//_delay_ms(mSeconds); 
	return 0;
}

int f3(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 187;
	//_delay_ms(mSeconds); 
	return 0;
}

int g3(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 166;
	//_delay_ms(mSeconds); 
	return 0;
}

int a3(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 148;
	//_delay_ms(mSeconds); 
	return 0;
}

int b3(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 132;
	//_delay_ms(mSeconds); 
	return 0;
}

int c4(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 124;
	//_delay_ms(mSeconds); 
	return 0;
}

int d4(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 111;
	//_delay_ms(mSeconds); 
	return 0;
}

int e4(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 98;
	//_delay_ms(mSeconds); 
	return 0;
}

int f4(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 93;
	//_delay_ms(mSeconds); 
	return 0;
}

int g4(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 83;
	//_delay_ms(mSeconds); 
	return 0;
}

int a4(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 73;
	//_delay_ms(mSeconds); 
	return 0;
}

int b4(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000100; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 65;
	//_delay_ms(mSeconds); 
	return 0;
}

int c5(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000011; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 249;
	//_delay_ms(mSeconds); 
	return 0;
}

int d5(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000011; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 222;
	//_delay_ms(mSeconds); 
	return 0;
}

int e5(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000011; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 198;
	//_delay_ms(mSeconds); 
	return 0;
}

int f5(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000011; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 187;
	//_delay_ms(mSeconds); 
	return 0;
}

int g5(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000011; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 166;
	//_delay_ms(mSeconds); 
	return 0;
}

int a5(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000011; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 148;
	//_delay_ms(mSeconds); 
	return 0;
}

int b5(){
	TCCR0B &= 0B11111000; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	TCCR0B |= 0B00000011; // FOC0A FOC0B – – WGM02 CS02 CS01 CS00
	// CS00:2 = 3 -> 64
	// CS00:2 = 4 -> 256
	OCR0A = 132;
	//_delay_ms(mSeconds); 
	return 0;
}

int silence(){
	DDRD &= 0B10111111; // PD6 set to INPUT
	return 0;
}

int sound(){
	DDRD |= 0B01000000; // PD6 set to OUTPUT
	return 0;
}
