/*
 * music.h
 *
 * Created: 29/10/2019 17:39:52
 *  Author: Gabriel Faleiro Rodriguez
 */ 

#include "notes.h"

#ifndef MUSIC_H_
#define MUSIC_H_

#define F_CPU 16000000UL // 16 MHz used in util/delay.h

#include <util/delay.h> // To use delay functions

#ifndef MS_BLACK
/* prevent compiler error by supplying a default */
# warning "MS_BLACK not defined for <music.h>"
#define MS_BLACK 400
#endif

#define MS_DOUBLE (MS_BLACK*2)
#define MS_QUADRUPLE (MS_BLACK*4)
#define MS_HALF (MS_BLACK/2)
#define MS_QUARTER (MS_BLACK/4)

int tetris();

int zelda_intro();
int zelda_melody();
int zelda();

#endif /* MUSIC_H_ */