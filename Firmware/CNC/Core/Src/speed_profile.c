/*
 * speed_profile.c
 *
 *  Created on: Aug 16, 2026
 *      Author: Admin
 */

#include "speed_profile.h"

void InitSpeedProfile(SpeedProfile* sp, float maxSpeed){
	sp -> currentSpeed = 0;
	sp -> targetSpeed  = 0;
	sp -> maxSpeed     = maxSpeed;
	sp -> acceleration = 0;
	sp -> deceleration = 0;
}

