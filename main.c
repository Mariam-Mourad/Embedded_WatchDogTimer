/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"
#include<util/delay.h>
#include"DIO_interface.h"
#include"watch_dog_timer_interface.h"

void main (void)
{DIO_vidSetPinDirection(PORTC,PIN0,OUTPUT);
DIO_vidSetPinValue(PORTC,PIN0,HIGH);//led on
_delay_ms(2000);//delay
DIO_vidSetPinValue(PORTC,PIN0,LOW);//led off
watch_dog_timer_init();
	while(1)
	{


	}
}
