/*
 * watch_dog_timer_prog.c

 *
 *  Created on: Sep 28, 2019
 *      Author: Mariam
 */
#include"std_types.h"

#include"watch_dog_timer_interface.h"
#include"watch_dog_timer_regs.h"


void watch_dog_timer_init(void)
{
	//working pn 2 sec delay
WatchDog_WDTCR=0x0F;
}
void watch_dog_timer_disable(void)
{
	WatchDog_WDTCR=0x18;
	WatchDog_WDTCR&=0xF7;
}
