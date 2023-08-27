/*
 * ADC_INT.c
 *
 * Created: 8/24/2023 9:38:05 AM
 *  Author: Ahmed ElSayed
 */ 
#include "ADC_INT.h"

void INT_ADC_Init(){
	SET_GlobalInterrupt();
	SET_BIT(ADC_CONTROL_R, ADC_INT_MASK_BIT);
}