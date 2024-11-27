/*
 * led7_segment.h
 *
 *  Created on: 25 Oct 2024
 *      Author: HOANG ANH
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_

#include "main.h"
#include "global.h"

void display7SEG_horizontal(int num);
void display7SEG_vertical(int num);
void update7SEG(int index);
void updateBuffer();
void countdown7SEG();
void Led7SEG_YR();
void Led7SEG_GR();
void Led7SEG_RY();
void Led7SEG_RG();
void display7SEG();

#endif /* INC_LED7_SEGMENT_H_ */
