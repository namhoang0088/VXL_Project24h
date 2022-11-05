/*
 * button2.h
 *
 *  Created on: Nov 4, 2022
 *      Author: ACER
 */

#ifndef INC_BUTTON2_H_
#define INC_BUTTON2_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

#define INIT 0
#define FLAG 1
#define TWOCLICK 2
#define LONGPRESS 3

extern int buffer_button2;

extern int button2_flag;
extern int button2_long_press;
extern int button2_1click;
extern int button2_2click;

void getKeyInput2();

#endif /* INC_BUTTON2_H_ */
