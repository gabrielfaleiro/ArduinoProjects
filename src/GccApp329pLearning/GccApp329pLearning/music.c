/*
 * music.c
 *
 * Created: 29/10/2019 17:39:25
 *  Author: Gabriel Faleiro Rodriguez
 */ 

#include "music.h"

int tetris(){
	
	setupTimer0FreqGen(0);
	
	// 1
	e4();
	_delay_ms(MS_BLACK);
	b3();
	_delay_ms(MS_HALF);
	c4();
	_delay_ms(MS_HALF);
	d4();
	_delay_ms(MS_BLACK);
	c4();
	_delay_ms(MS_HALF);
	b3();
	_delay_ms(MS_HALF);
	// 2
	a3();
	_delay_ms(MS_BLACK);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF);
	c4();
	_delay_ms(MS_HALF);
	e4();
	_delay_ms(MS_BLACK);
	d4();
	_delay_ms(MS_HALF);
	c4();
	_delay_ms(MS_HALF);
	// 3
	b3();
	_delay_ms(MS_BLACK);
	silence();
	_delay_ms(20);
	sound();
	b3();
	_delay_ms(MS_HALF);
	c4();
	_delay_ms(MS_HALF);
	d4();
	_delay_ms(MS_BLACK);
	e4();
	_delay_ms(MS_BLACK);
	// 4
	c4();
	_delay_ms(MS_BLACK);
	a3();
	_delay_ms(MS_BLACK);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_DOUBLE);
	// 5
	d4();
	_delay_ms(MS_BLACK);
	f4();
	_delay_ms(MS_HALF);
	a4();
	_delay_ms(MS_BLACK);
	g4();
	_delay_ms(MS_HALF);
	f4();
	_delay_ms(MS_HALF);
	// 6
	e4();
	_delay_ms(MS_BLACK);
	_delay_ms(MS_HALF);
	c4();
	_delay_ms(MS_HALF);
	e4();
	_delay_ms(MS_BLACK);
	d4();
	_delay_ms(MS_HALF);
	c4();
	_delay_ms(MS_HALF);
	// 7 
	b3();
	_delay_ms(MS_BLACK);
	silence();
	_delay_ms(20);
	sound();
	b3();
	_delay_ms(MS_HALF);
	c4();
	_delay_ms(MS_HALF);
	d4();
	_delay_ms(MS_BLACK);
	e4();
	_delay_ms(MS_BLACK);
	// 8
	c4();
	_delay_ms(MS_BLACK);
	a3();
	_delay_ms(MS_BLACK);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_DOUBLE);
	
	return 0;
}

int zelda_intro(){
	// 1
	a3();
	_delay_ms(MS_DOUBLE);
	silence();
	_delay_ms(MS_BLACK);
	sound();
	a3();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	// 2
	a3();
	_delay_ms(MS_BLACK-20);
	g3();
	_delay_ms(MS_HALF);
	a3();
	_delay_ms(MS_BLACK);
	silence();
	_delay_ms(MS_BLACK);
	sound();
	a3();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	// 3
	a3();
	_delay_ms(MS_BLACK-20);
	g3();
	_delay_ms(MS_HALF);
	a3();
	_delay_ms(MS_BLACK);
	silence();
	_delay_ms(MS_BLACK);
	sound();
	a3();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	// 4
	a3();
	_delay_ms(MS_HALF-20);
	e3();
	_delay_ms(MS_QUARTER);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	
	return 0;
}

int zelda_melody(){
	
	// 5
	a3();
	_delay_ms(MS_BLACK);
	e3();
	_delay_ms(MS_BLACK);
	_delay_ms(MS_HALF);
	a3();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_QUARTER-20);
	b3();
	_delay_ms(MS_QUARTER);
	c4(); // sharp
	_delay_ms(MS_QUARTER);
	d4();
	_delay_ms(MS_QUARTER);
	// 6
	e4();
	_delay_ms(MS_DOUBLE);
	silence();
	_delay_ms(MS_HALF);
	sound();
	e4();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	e4();
	_delay_ms(MS_HALF-20);
	f4();
	_delay_ms(MS_HALF);
	g4();
	_delay_ms(MS_HALF);
	// 7
	a4();
	_delay_ms(MS_DOUBLE);
	silence();
	_delay_ms(MS_HALF);
	sound();
	a4();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	a4();
	_delay_ms(MS_HALF-20);
	g4();
	_delay_ms(MS_HALF);
	f4();
	_delay_ms(MS_HALF);
	// 8
	g4();
	_delay_ms(MS_BLACK);
	f4();
	_delay_ms(MS_QUARTER);
	e4();
	_delay_ms(MS_DOUBLE);
	silence();
	_delay_ms(20);
	sound();
	e4();
	_delay_ms(MS_HALF-20);
	// 9
	d4();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	d4();
	_delay_ms(MS_QUARTER-20);
	e4();
	_delay_ms(MS_QUARTER);
	f4();
	_delay_ms(MS_DOUBLE);
	e4();
	_delay_ms(MS_HALF);
	f4();
	_delay_ms(MS_HALF);
	// 10
	c4();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	c4();
	_delay_ms(MS_QUARTER-20);
	d4();
	_delay_ms(MS_QUARTER);
	e4();
	_delay_ms(MS_DOUBLE);
	d4();
	_delay_ms(MS_HALF);
	c4();
	_delay_ms(MS_HALF);
	// 11
	b3();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	b3();
	_delay_ms(MS_QUARTER-20);
	c4(); // sharp
	_delay_ms(MS_QUARTER);
	d4(); // sharp
	_delay_ms(MS_DOUBLE);
	f4(); // sharp
	_delay_ms(MS_BLACK);
	// 12 (3rd line)
	e4();
	_delay_ms(MS_HALF);
	e3();
	_delay_ms(MS_QUARTER);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	// 13
	a3();
	_delay_ms(MS_BLACK);
	e3();
	_delay_ms(MS_BLACK);
	_delay_ms(MS_HALF);
	a3();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	a3();
	_delay_ms(MS_QUARTER-20);
	b3();
	_delay_ms(MS_QUARTER);
	c4(); // sharp
	_delay_ms(MS_QUARTER);
	d4();
	_delay_ms(MS_QUARTER);
	// 14
	e4();
	_delay_ms(MS_DOUBLE);
	silence();
	_delay_ms(MS_HALF);
	sound();
	e4();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	e4();
	_delay_ms(MS_HALF-20);
	f4();
	_delay_ms(MS_HALF);
	g4();
	_delay_ms(MS_HALF);
	// 15
	a4();
	_delay_ms(MS_DOUBLE);
	silence();
	_delay_ms(MS_BLACK);
	sound();
	c5();
	_delay_ms(MS_BLACK);
	// 16
	b4();
	_delay_ms(MS_BLACK);
	g4(); //sharp
	_delay_ms(MS_DOUBLE);
	e4();
	_delay_ms(MS_BLACK);
	// 17
	f4();
	_delay_ms(MS_BLACK);
	_delay_ms(MS_HALF);
	a4();
	_delay_ms(MS_BLACK);
	g4(); // sharp
	_delay_ms(MS_BLACK);
	e4();
	_delay_ms(MS_DOUBLE);
	silence();
	_delay_ms(20);
	sound();
	e4();
	_delay_ms(MS_BLACK-20);
	// 19 (4th line)
	f4();
	_delay_ms(MS_DOUBLE);
	_delay_ms(MS_BLACK);
	a4();
	_delay_ms(MS_BLACK);
	// 20
	g4(); // sharp 
	_delay_ms(MS_BLACK);
	e4();
	_delay_ms(MS_DOUBLE);
	c4(); // sharp
	_delay_ms(MS_BLACK);
	// 21 
	d4();
	_delay_ms(MS_DOUBLE);
	_delay_ms(MS_BLACK);
	f4();
	_delay_ms(MS_BLACK);
	// 22
	e4();
	_delay_ms(MS_BLACK);
	c4();
	_delay_ms(MS_DOUBLE);
	a3();
	_delay_ms(MS_BLACK);
	// 23
	b3();
	_delay_ms(MS_HALF);
	silence();
	_delay_ms(20);
	sound();
	b3();
	_delay_ms(MS_QUARTER-20);
	c4();
	_delay_ms(MS_QUARTER);
	d4();
	_delay_ms(MS_DOUBLE);
	f4();
	_delay_ms(MS_BLACK);
	// 24
	e4();
	_delay_ms(MS_HALF);
	e3();
	_delay_ms(MS_QUARTER);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_QUARTER-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	silence();
	_delay_ms(20);
	sound();
	e3();
	_delay_ms(MS_HALF-20);
	
	return 0;
}

int zelda(){
	setupTimer0FreqGen(0);
	
	// REF: https://musescore.com/user/20360426/scores/4880846
	
	zelda_intro();
	zelda_melody();
	zelda_melody();
	
	return 0;
}


