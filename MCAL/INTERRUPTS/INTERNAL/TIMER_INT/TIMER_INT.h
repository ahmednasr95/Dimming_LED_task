/*
 * TIMER0_INT.h
 *
 * Created: 8/24/2023 6:55:10 AM
 *  Author: Ahmed ElSayed
 */ 


#ifndef _TIMER_INT_H_
#define _TIMER_INT_H_

#include "TIMER_INT_CONFIG.h"

#define TIMER0_OV_MASK_BIT	0
#define TIMER0_OC_MASK_BIT	1	
#define TIMER0_OV_FLAG_BIT	0
#define TIMER0_OC_FLAG_BIT  1

#define TIMER0_INT_OV		1
#define TIMER0_INT_OC		2
#define BOTH_OC_OV			3

void INT_TIMER0_Init();

#endif /* TIMER0_INT_H_ */