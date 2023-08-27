#include "iom32a.h"

#ifndef _TIMER_H_
#define _TIMER_H_

#define TIMER0_CONTROL_R *((volatile uint8_t*)0x)
#define TIMER0_ACC_R *((volatile uint8_t*)0x)
#define TIMER0_I_MASK_R *((volatile uint8_t*)0x)
#define TIMER0_I_FLAG_R *((volatile uint8_t*)0x)

void TIMER_Initialize(uint8_t Prescale)
#endif