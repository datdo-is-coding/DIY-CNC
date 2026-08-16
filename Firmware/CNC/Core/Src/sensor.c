/*
 * sensor.c
 *
 *  Created on: Aug 15, 2026
 *      Author: Admin
 */

#include "sensor.h"

Sensor sensors[SENSOR_NUM];

void InitSensor(SensorType type,GPIO_TypeDef* port, uint16_t channel){
	sensors[type].port =  port;
	sensors[type].channel =  channel;
	sensors[type].last_time = 0;
}

void InitSensors(){
	InitSensor(CT_X1, CT_X1_GPIO_Port, CT_X1_Pin);
	InitSensor(CT_X2, CT_X2_GPIO_Port, CT_X2_Pin);

	InitSensor(CT_Y1, CT_Y1_GPIO_Port, CT_Y1_Pin);
	InitSensor(CT_Y2, CT_Y2_GPIO_Port, CT_Y2_Pin);

	InitSensor(CT_Z1, CT_Z1_GPIO_Port, CT_Z1_Pin);
	InitSensor(CT_Z2, CT_Z2_GPIO_Port, CT_Z2_Pin);
}
