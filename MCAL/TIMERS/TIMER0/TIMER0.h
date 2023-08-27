#ifndef _TIMER0_H_
#define _TIMER0_H_

#include "TIMER0_CONFIG.h"

/*TIMER0 control register bits*/
#define TIMER0_COM00_BIT				4
#define TIMER0_COM01_BIT				5
#define TIMER0_WGM00_BIT				6
#define TIMER0_WGM01_BIT				3
#define TIMER0_CS00_BIT					0
#define TIMER0_CS01_BIT					1
#define TIMER0_CS02_BIT					2

#define TIMER0_NO_PRESCALE				1
#define TIMER0_PRESCALE_8				2
#define TIMER0_PRESCALE_64				3
#define TIMER0_PRESCALE_256				4
#define TIMER0_PRESCALE_1024			5
#define TIMER0_EXTERNAL_FALLING_EDGE	6
#define TIMER0_EXTERNAL_RISING_EDGE		7

#define TIMER0_NORMAL					1
#define TIMER0_PHASE_CORRECTED_PWM		2
#define TIMER0_CTC						3
#define TIMER0_FAST_PWM					4

#if TIMER0_MODE == TIMER0_NORMAL || TIMER0_MODE == TIMER0_CTC

#define TIMER0_DISCONNECT_OC0			1
#define TIMER0_TOGGLE_OC0				2
#define TIMER0_CLEAR_OC0				3
#define TIMER0_SET_OC0					4

#elif TIMER0_MODE == TIMER0_PHASE_CORRECTED_PWM || TIMER0_MODE == TIMER0_FAST_PWM

#define TIMER0_DISCONNECT_OC0			1
#define TIMER0_CLEAR_OC0				2
#define TIMER0_SET_OC0					3

#endif /*TIMER MODE*/
			
void TIMER0_Init(void);

void TIMER0_OFF(void);

UINT8_t TIMER0_Read(void);

void TIMER0_Write(UINT8_t val);

#endif