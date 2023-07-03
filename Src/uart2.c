/*
 * uart2.c
 *
 * USE HAL Drivers
 */


void  Systick_Handler(void){
	HAL_IncTick();
}

void usart_init(void){
	GPIO_InitTypeDef GPIO_InitStruct = (0);

	//Enable UART pins clock access
	__HAL_RCC_GPIOA_CLK_ENABLE();

	//Enable UART module clock Access
	__HAL_RCC_USART2_CLK_ENABLE();

	//Configure pin 2 to act as alternate func pin
	GPIO_InitStruct.pin = GPIO_PIN_2;
	GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
	GPIO_InitStruct.Alternate = GPIO_AF7_USART2;

	HAL_GPIO_Init(GPIOA,&GPIO_InitStruct);

	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;

}
