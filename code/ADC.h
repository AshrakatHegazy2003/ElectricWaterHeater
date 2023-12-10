/*
 * ADC.h
 *  Created: 12/9/2023 
 *  Author: Ashrakat
 * 
 */ 


#ifndef ADC_H_
#define ADC_H_


#include <avr/io.h>
#include "std_macros.h"

void ADC_init(void);
uint16_t ADC_read(void);


#endif /* ADC_H_ */