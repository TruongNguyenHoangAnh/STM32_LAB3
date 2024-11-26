/*
 * traffic_light.h
 *
 *  Created on: 25 Oct 2024
 *      Author: HOANG ANH
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

void toggleLedRed();
void toggleAllRed();
void toggleAllGreen();
void toggleAllYellow();

void setRedAGreenB();
void setRedAYellowB();
void setGreenARedB();
void setYellowARedB();

void OffAllLed();

void offGreenYellow();
void offGreenRed();
void offRedYellow();

#endif /* INC_TRAFFIC_LIGHT_H_ */
