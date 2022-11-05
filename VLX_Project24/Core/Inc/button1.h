/*
 * button1.h
 *
 *  Created on: Nov 4, 2022
 *      Author: ACER
 */

#ifndef INC_BUTTON1_H_
#define INC_BUTTON1_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

#define INIT 0
#define FLAG 1
#define TWOCLICK 2
#define LONGPRESS 3

extern int buffer_button1;

extern int button1_flag;
extern int button1_long_press;
extern int button1_1click;
extern int button1_2click;

void getKeyInput();

#endif /* INC_BUTTON1_H_ */
