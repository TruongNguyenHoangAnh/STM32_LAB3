/*
 * glo_horizontalal.h
 *
 *  Created on: 25 Oct 2024
 *      Author: HOANG ANH
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "traffic_light.h"
#include "led7_segment.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"
#include "fsm_setting.h"


#define MOD_AUTO	1
#define RED_GREEN	6
#define RED_YELLOW	7
#define GREEN_RED	8
#define YELLOW_RED	9
#define MOD_RED		2
#define MOD_YELLOW	3
#define MOD_GREEN	4
#define AUTO_RED 	10
#define AUTO_GREEN  11
#define AUTO_YELLOW 12
#define MOD_INIT	13
#define MAN_RED		14
#define MAN_GREEN	15
#define MAN_YELLOW	16

extern int mode;
extern int status;
extern int status_system;
extern int num;

extern int indexBuffer;
extern int led_buffer[];

extern int TIME_RED;
extern int TIME_YELLOW;
extern int TIME_GREEN;

extern int TIME_RED_tmp;
extern int TIME_YELLOW_tmp;
extern int TIME_GREEN_tmp;


#endif /* INC_GLO_horizontalAL_H_ */
