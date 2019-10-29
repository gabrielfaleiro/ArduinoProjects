/*
 * music.h
 *
 * Created: 29/10/2019 16:51:08
 *  Author: Gabriel Faleiro Rodríguez
 */ 

#ifndef NOTES_H_
#define NOTES_H_

#include <avr/io.h>
#include "avr/iom329p.h"

#define TCCR0B  _SFR_IO8(0x25)
#define SREG    _SFR_IO8(0x3F)

int setupTimer0FreqGen(int enInt);

int c3();
int d3();
int e3();
int f3();
int g3();
int a3();
int b3();
int c4();
int d4();
int e4();
int f4();
int g4();
int a4();
int b4();
int c5();
int d5();
int e5();
int f5();
int g5();
int a5();
int b5();

int silence();
int sound();

#endif /* NOTES_H_ */