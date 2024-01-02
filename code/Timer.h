/*
 * Timer.h
 *
 *  Created: 12/9/2023 
 *  Author: Ashrakat
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "std_macros.h"

void timer1_init();
void timer0_init();
void timer1_INT_disable();
void timer1_INT_enable();

#endif /* TIMER_H_ */
