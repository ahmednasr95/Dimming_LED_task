#ifndef _EXT_INT_H_
#define _EXT_INT_H_

#include "EXT_INT_CFG.h"
#include "ATMEGA32_REGISTERS.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include <avr/interrupt.h>

#define GLOBAL_INTERRUPT_DISABLE			0
#define GLOBAL_INTERRUPT_ENABLE				1

#define EXTERNAL_INT0						6
#define EXTERNAL_INT1						7
#define EXTERNAL_INT2						5

#define INT0_TRIGGER_PIN0					0
#define INT0_TRIGGER_PIN1					1

#define INT1_TRIGGER_PIN2					2
#define INT1_TRIGGER_PIN3					3

#define INT2_TRIGGER_PIN					6

#define INT0_TRIGGER_LOW_LEVEL				0
#define INT0_TRIGGER_RISING_EDGE			1
#define INT0_TRIGGER_FALLING_EDGE			2
#define INT0_TRIGGER_ANY_LOGICAL_CHANGE		3

#define INT1_TRIGGER_LOW_LEVEL				0
#define INT1_TRIGGER_RISING_EDGE			1
#define INT1_TRIGGER_FALLING_EDGE			2
#define INT1_TRIGGER_ANY_LOGICAL_CHANGE		3

#define INT2_TRIGGER_RISING_EDGE			0
#define INT2_TRIGGER_FALLING_EDGE			1

void SET_GlobalInterrupt(void);

void ExternalINT0_Init(void);

void ExternalINT1_Init(void);

void ExternalINT2_Init(void);

#endif