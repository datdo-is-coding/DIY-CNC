/*
 * cmd_line.h
 *
 *  Created on: Aug 16, 2026
 *      Author: Admin
 */

#ifndef INC_CMD_LINE_H_
#define INC_CMD_LINE_H_

#include "stdint.h"

#define BUFFER_LENGTH 32


extern uint8_t character;

extern uint8_t cmd_idx;

extern uint8_t buffer[BUFFER_LENGTH];


void parseCMD();


#endif /* INC_CMD_LINE_H_ */
