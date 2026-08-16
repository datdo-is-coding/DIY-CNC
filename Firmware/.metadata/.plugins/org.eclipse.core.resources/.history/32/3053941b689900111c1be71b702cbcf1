/*
 * motion_profile.h
 *
 *  Created on: Aug 16, 2026
 *      Author: Admin
 */

#ifndef MOTION_PROFILE_H_
#define MOTION_PROFILE_H_


typedef struct{
	float currentSpeed; // mm/s
 	float targetSpeed;	// mm/s

	float maxSpeed;		// mm/s

	float acceleration; // mm/s2
	float deceleration; // mm/s2


}SpeedProfile;


void InitSpeedProfile(SpeedProfile* sp, float maxSpeed){
	sp -> currentSpeed = 0;
	sp -> targetSpeed  = 0;
	sp -> maxSpeed     = maxSpeed;
	sp -> acceleration = 0;
	sp -> deceleration = 0;
}

#endif /* MOTION_PROFILE_H_ */
