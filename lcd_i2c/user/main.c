#include "stm32f10x.h"                  // Device header
#include "lcd_i2c.h"
#include "button.h"

int main(void)
{
	SystemInit();
	Delay_Init();
	LCD_I2C_Init(I2C1);
	LCD_I2C_Clear();
	
	LCD_I2C_Goto(0, 0);
	LCD_I2C_SendString("Hello, STM32!");
	
	LCD_I2C_Goto(1, 0);
	LCD_I2C_SendString("I2C LCD Ready");
	
	while (1)
	{
		
	}
}
