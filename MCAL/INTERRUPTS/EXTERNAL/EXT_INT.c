#include "EXT_INT.h"

void SET_GlobalInterrupt(){
	#if GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_ENABLE
	
	SET_BIT(STATUS_REG,7);
	
	#elif GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_DISABLE
	
	CLEAR_BIT(STATUS_REG,7);
	
	#endif
}

/*
	Inputs: None
	Output: None
	Description: Initializes external interrupt 0.
	The function follows the following steps:
	1) Disable global interrupts
	2) Enable INT0 pin in GICR
	3) Set interrupt trigger pins in MCUCR
	4) Enable global interrupts
*/
void ExternalINT0_Init(){
	/*Clear global interrupts*/
	CLEAR_BIT(STATUS_REG,7);
	/*Configure Global Interrupt Control register*/
	SET_BIT(GICR_REG, EXTERNAL_INT0);
	/*Configure MCU Control register*/	
	#if EXTERNAL_INT0_TRIGGER == INT0_TRIGGER_LOW_LEVEL
	
	CLEAR_BIT(MCUCR_REG, INT0_TRIGGER_PIN1);
	CLEAR_BIT(MCUCR_REG, INT0_TRIGGER_PIN0);
	
	#elif EXTERNAL_INT0_TRIGGER == INT0_TRIGGER_ANY_LOGICAL_CHANGE
	
	CLEAR_BIT(MCUCR_REG, INT0_TRIGGER_PIN1);
	SET_BIT(MCUCR_REG, INT0_TRIGGER_PIN0);
	
	#elif EXTERNAL_INT0_TRIGGER == INT0_TRIGGER_FALLING_EDGE
	
	SET_BIT(MCUCR_REG, INT0_TRIGGER_PIN1);
	CLEAR_BIT(MCUCR_REG, INT0_TRIGGER_PIN0);
	
	#elif EXTERNAL_INT0_TRIGGER == INT0_TRIGGER_RISING_EDGE
	
	SET_BIT(MCUCR_REG, INT0_TRIGGER_PIN1);
	SET_BIT(MCUCR_REG, INT0_TRIGGER_PIN0);
	
	#endif
	/*Set global interrupts*/
	SET_BIT(STATUS_REG,7);
}

/*
	Inputs: None
	Output: None
	Description: Initializes external interrupt 1.
	The function follows the following steps:
	1) Disable global interrupts
	2) Enable INT1 pin in GICR
	3) Set interrupt trigger pins in MCUCR
	4) Enable global interrupts
*/
void ExternalINT1_Init(){
	/*Clear global interrupts*/
	CLEAR_BIT(STATUS_REG,7);
	/*Configure Global Interrupt Control register*/
	SET_BIT(GICR_REG, EXTERNAL_INT1);
	/*Configure MCU Control register*/
	#if EXTERNAL_INT1_TRIGGER == INT1_TRIGGER_LOW_LEVEL
	
	CLEAR_BIT(MCUCR_REG, INT1_TRIGGER_PIN3);
	CLEAR_BIT(MCUCR_REG, INT1_TRIGGER_PIN2);
	
	#elif EXTERNAL_INT1_TRIGGER == INT1_TRIGGER_ANY_LOGICAL_CHANGE
	
	CLEAR_BIT(MCUCR_REG, INT1_TRIGGER_PIN3);
	SET_BIT(MCUCR_REG, INT1_TRIGGER_PIN2);
	
	#elif EXTERNAL_INT1_TRIGGER == INT1_TRIGGER_FALLING_EDGE
	
	SET_BIT(MCUCR_REG, INT1_TRIGGER_PIN3);
	CLEAR_BIT(MCUCR_REG, INT1_TRIGGER_PIN2);
	
	#elif EXTERNAL_INT1_TRIGGER == INT1_TRIGGER_RISING_EDGE
	
	SET_BIT(MCUCR_REG, INT1_TRIGGER_PIN3);
	SET_BIT(MCUCR_REG, INT1_TRIGGER_PIN2);
	
	#endif
	/*Set global interrupts*/
	SET_BIT(STATUS_REG,7);	
	
}


/*
	Inputs: None
	Output: None
	Description: Initializes external interrupt 2.
	The function follows the following steps:
	1) Disable global interrupts
	2) Enable INT2 pin in GICR
	3) Set interrupt trigger pins in MCUCSR
	4) Enable global interrupts
*/
void ExternalINT2_Init(){
	/*Clear global interrupts*/
	CLEAR_BIT(STATUS_REG,7);
	/*Configure Global Interrupt Control register*/
	SET_BIT(GICR_REG, EXTERNAL_INT2);
	/*Configure MCU Control Status register*/	
	#if EXTERNAL_INT2_TRIGGER == INT2_TRIGGER_FALLING_EDGE
	
	CLEAR_BIT(MCUCSR_REG, INT2_TRIGGER_PIN);
	
	#elif EXTERNAL_INT2_TRIGGER == INT2_TRIGGER_RISING_EDGE
	
	SET_BIT(MCUCSR_REG, INT2_TRIGGER_PIN);
	
	#endif
	/*Set global interrupts*/
	SET_BIT(STATUS_REG,7);
}