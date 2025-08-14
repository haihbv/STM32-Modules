#include "stm32f10x.h"                  // Device header
#include "ds3231.h"
#include "delay.h"

int main()
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	
	GPIO_InitTypeDef gpio;
	gpio.GPIO_Mode = GPIO_Mode_Out_PP;
	gpio.GPIO_Pin = GPIO_Pin_13;
	gpio.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &gpio);
	Delay_Init();
	
	while (1)
	{
		GPIO_ResetBits(GPIOC, GPIO_Pin_13);
		Delay_ms(1000);
		GPIO_SetBits(GPIOC, GPIO_Pin_13);
		Delay_ms(1000);
	}
}
