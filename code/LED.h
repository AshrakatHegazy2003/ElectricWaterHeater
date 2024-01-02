/*
 * led.h
 *
 *  Created: 12/9/2023 
 *  Author: Ashrakat
 */ 


#ifndef LED_H_
#define LED_H_


#include <avr/io.h>
#include "std_macros.h"

#define LED_PORT_DIR DDRB
#define LED_PORT PORTB
#define LED_PIN 0

void led_init(void);
void led_on(void);
void led_off(void);


#endif /* LED_H_ */
