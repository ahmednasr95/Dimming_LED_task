#ifndef _TIMER0_CONFIG_H_
#define _TIMER0_CONFIG_H_

#include "DIO.h"
#include "STD_TYPES.h"
#include "TIMER_INT.h"

#define NUMBER_OF_OV_REQ		244

#define TIMER0_PRESCALER		TIMER0_PRESCALE_64 
#define TIMER0_MODE				TIMER0_FAST_PWM
#define TIMER0_OC0_OUTPUT_MODE	TIMER0_SET_OC0

#endif 