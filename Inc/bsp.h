/*
 * bsp.h
 *
 *  Created on: Jun 26, 2023
 *      Author: josep
 */

#ifndef BSP_H_
#define BSP_H_

#include <stdint.h>
#include <stdbool.h>

void led_init(void);
void led_on(void);
void led_off(void);
void button_init(void);
bool get_btn_state(void);


#endif /* BSP_H_ */
