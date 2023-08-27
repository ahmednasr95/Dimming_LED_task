/*
 * main.c
 *
 * Created: 8/28/2023 1:29:47 AM
 *  Author: Ahmed ElSayed
 */ 

#include "TIMER0.h"

void test_TIMER(){
	TIMER0_Init();
	DIO_SetPinDir(DIO_PORTB, DIO_PIN3, DIO_PIN_OUTPUT);
}

int main(void)
{
	UINT8_t index = 0;
	
	DIO_SetPinDir(DIO_PORTA, DIO_PIN5, DIO_PIN_OUTPUT);
	DIO_SetPinVal(DIO_PORTA, DIO_PIN5, DIO_PIN_HIGH);
	
	test_TIMER();
    while(1)
    {
        for(; 255 > index; ++index){
	        TIMER0_Write(index);
	        _delay_ms(10);
        }
        _delay_ms(100);
        for( ; 0 < index; --index){
	        TIMER0_Write(index);
	        _delay_ms(10);
        }
	}
}

ISR (TIMER0_COMP_vect){
}