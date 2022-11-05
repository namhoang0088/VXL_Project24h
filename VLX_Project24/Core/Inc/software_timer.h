/*
 * software_timer.h
 *
 *  Created on: Nov 4, 2022
 *      Author: ACER
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_counter;
extern int timer1_flag;
extern int TIMER_CYCLE;
void setTimer1 ( int duration );
void timer_run();

extern int timer2_counter;
extern int timer2_flag;
void setTimer2 ( int duration );
void timer_run2();

extern int timer3_counter;
extern int timer3_flag;
void setTimer3 ( int duration );
void timer_run3();

extern int timer4_counter;
extern int timer4_flag;
void setTimer4 ( int duration );
void timer_run4();

extern int timer5_counter;
extern int timer5_flag;
void setTimer5 ( int duration );
void timer_run5();

#endif /* INC_SOFTWARE_TIMER_H_ */
