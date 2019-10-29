/*
 * music.c
 *
 * Created: 29/10/2019 17:39:25
 *  Author: Gabriel Faleiro Rodriguez
 */ 

#include "music.h"

int tetris(int msBlack){
	
	setupTimer0FreqGen(0);
	
	e5(msBlack*1);
	b4(msBlack/2);
	c5(msBlack/2);
	d5(msBlack*1);
	c5(msBlack/2);
	b4(msBlack/2);
	//
	a4(msBlack*1);
	silence(msBlack/20);
	a4(msBlack/2);
	
	return 0;
}