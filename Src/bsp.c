/*
 * bsp.c
 *
 *  Created on: Jun 26, 2023
 *      Author: josep
 */

#include "stm32f4xx.h"
#include "bsp.h"
#define GPIOAEN (1U<<0)
#define GIPOCEN (1U<<2)
#define PIN5    (1U<<5)
#define LED_PIN PIN5


void led_init(void){
	/*Enable clock access to GPIOA*/
	RCC->AHB1ENR |= GPIOAEN;
	/*Set Pa5 mode to output mode*/
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~ (1U<<11); /*check this out */
}
void led_on(void){
	/*Set PA5 high*/
	GPIOA->ODR |= LED_PIN;
}

void led_off(void){
	/*Set PA5 low*/
	GPIOA->ODR &=~LED_PIN;
}

void button_init(void){
	/* enable clock access to PORTC*/
	/* set PC13 as an input pin*/
}

bool get_btn_state(void){
	/*check if button is pressed*/

}
