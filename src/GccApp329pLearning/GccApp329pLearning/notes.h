/*
 * music.h
 *
 * Created: 29/10/2019 16:51:08
 *  Author: Gabriel Faleiro Rodríguez
 */ 

#ifndef NOTES_H_
#define NOTES_H_

#define F_CPU 16000000UL // 16 MHz used in util/delay.h

#include <avr/io.h>
#include <util/delay.h> // To use delay functions
#include "avr/iom329p.h"

#define TCCR0B  _SFR_IO8(0x25)
#define SREG    _SFR_IO8(0x3F)

int setupTimer0FreqGen(int enInt);

int c3(int mSeconds);
int d3(int mSeconds);
int e3(int mSeconds);
int f3(int mSeconds);
int g3(int mSeconds);
int a3(int mSeconds);
int b3(int mSeconds);
int c4(int mSeconds);
int d4(int mSeconds);
int e4(int mSeconds);
int f4(int mSeconds);
int g4(int mSeconds);
int a4(int mSeconds);
int b4(int mSeconds);
int c5(int mSeconds);
int d5(int mSeconds);
int e5(int mSeconds);
int f5(int mSeconds);
int g5(int mSeconds);
int a5(int mSeconds);
int b5(int mSeconds);

int silence(int mSeconds);

#endif /* NOTES_H_ */