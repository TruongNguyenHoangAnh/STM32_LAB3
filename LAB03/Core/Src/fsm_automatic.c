/*
 * fsm_automatic.c
 *
 *  Created on: 29 Oct 2024
 *      Author: HOANG ANH
 */


#include "fsm_automatic.h"

void fsm_automatic()
{
	switch (status){
	case MOD_INIT:
		status = RED_GREEN;
		setTimer2(TIME_GREEN*1000);
		break;
	case RED_GREEN:
		display7SEG();
		setRedAGreenB();
		if(timer_flag2 == 1){
			status = RED_YELLOW;
			setTimer2(TIME_YELLOW*1000);
		}
		break;
	case RED_YELLOW:
		display7SEG();
		setRedAYellowB();
		if(timer_flag2 == 1){
			status = GREEN_RED;
			setTimer2(TIME_GREEN*1000);
		}
		break;
	case GREEN_RED:
		display7SEG();
		setGreenARedB();
		if(timer_flag2 ==1){
			status = YELLOW_RED;
			setTimer2(TIME_YELLOW*1000);
		}
		break;
	case YELLOW_RED:
		display7SEG();
		setYellowARedB();
		if(timer_flag2 == 1){
			status = RED_GREEN;
			setTimer2(TIME_GREEN*1000);
		}
		break;
	default:
		break;

	}
}
