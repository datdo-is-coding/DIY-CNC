/*
 * control_axes.c
 *
 *  Created on: Aug 15, 2026
 *      Author: Admin
 */
#include "control_axes.h"

Axis axes[AXES_NUM];



void initAxes(){
	InitMotor(&axes[X_AXIS].motor, &htim2, TIM_CHANNEL_1, HIGH, GPIOB, GPIO_PIN_0);
	InitSpeedProfile(&axes[X_AXIS].speed, MAX_SPEED);

	InitMotor(&axes[Y_AXIS].motor, &htim3, TIM_CHANNEL_1, LOW , GPIOB, GPIO_PIN_1);
	InitSpeedProfile(&axes[Y_AXIS].speed, MAX_SPEED);

	InitMotor(&axes[Z_AXIS].motor, &htim4, TIM_CHANNEL_1, HIGH, GPIOB, GPIO_PIN_2);
	InitSpeedProfile(&axes[Z_AXIS].speed, MAX_SPEED);



	for( uint8_t i = X_AXIS; i < AXES_NUM; i++){
		axes[i].axis = i;
		axes[i].mode = AXIS_IDLE;


		axes[i].limit = 0.0f;
		axes[i].currentSteps = 0;
		axes[i].totalSteps   = 0;
		axes[i].stepsDone 	 = 0;
	}
}

void Calibration(){

	for ( uint8_t i = X_AXIS ; i < AXES_NUM; i++){
		axes[i].mode = AXIS_CALIBRATING;
		axes[i].speed.currentSpeed = MIN_SPEED;
		axes[i].speed.maxSpeed	 	= MAX_SPEED;
		axes[i].speed.acceleration = 0.5; // mm/s^2
		StartMotor(&axes[i].motor, axes[i].speed.currentSpeed, Forward);


	}
}

void MoveToOrigin(){
	for ( uint8_t i = X_AXIS ; i < AXES_NUM; i++){
		axes[i].mode = AXIS_HOMING;
		axes[i].speed.currentSpeed  = MIN_SPEED;
		axes[i].speed.maxSpeed	 	= MAX_SPEED;
		axes[i].speed.acceleration = 0.5; // mm/s^2
		StartMotor(&axes[i].motor, axes[i].speed.currentSpeed, Backward);
	}
}

void StopAxis(AxisType axis){
	axes[axis].mode = AXIS_IDLE;
	axes[axis].speed.currentSpeed = 0.0f;
	StopMotor(&axes[axis].motor);
}

void SetSpeedAxis(AxisType axis){
	SetSpeed(&axes[axis].motor, axes[axis].speed.currentSpeed);
}

uint8_t isHoming(){
	return 	axes[X_AXIS].mode == AXIS_HOMING ||
			axes[Y_AXIS].mode == AXIS_HOMING ||
			axes[Z_AXIS].mode == AXIS_HOMING;
}

uint8_t isCalibrating(){
	return axes[X_AXIS].mode == AXIS_CALIBRATING || axes[Y_AXIS].mode == AXIS_CALIBRATING || axes[Z_AXIS].mode == AXIS_CALIBRATING;
}
