# STM32 SPL Peripheral Module Collection

Collection of reusable STM32F1 (SPL / Standard Peripheral Library) driver modules and quick demo projects.

## Structure

- `lcd_gpio/` 16x2 LCD parallel (GPIO) driver demo (Keil MDK project in `mdk/`, schematic / simulation in `proteus/`, user source in `user/`).
- `lcd_i2c/` Planned: 16x2 LCD via PCF8574 (I2C expander).
- `oled/` Planned: SSD1306 / SH1106 OLED driver.
- `tft_lcd/` Planned: TFT LCD (e.g. ILI9341) driver.
- `ds3231/` Planned: DS3231 RTC module.
- `hc_sr04/` Planned: Ultrasonic distance sensor.
- `ir_sensor/` Planned: IR receiver / remote decoding.

## Current Working Demo

`lcd_gpio` implements 4-bit mode 16x2 LCD routines:

Functions (see `lcd_gpio/user/lcd_16x2.[ch]`):
- `LCD_Init()` initialize display
- `LCD_Clear()` clear & home
- `LCD_GotoXY(col,row)` set cursor
- `LCD_PutChar(char)` write single character
- `LCD_Puts(const char*)` write string

Delay utilities in `delay.[ch]` (simple busy-wait calibrated for 72 MHz).

## Build (Keil MDK)

Open `lcd_gpio/mdk/lcd.uvprojx` in Keil uVision. Target: STM32F103C8 @72MHz (external HSE assumed). Build and flash. Hex/output files are ignored by git by default (see `.gitignore`).

## Simulation (Proteus)

Open `lcd_gpio/proteus/lcd16x2.pdsprj`. Ensure MCU clock + connections match the GPIO wiring used in the code.

## Contributing

Planned next steps:
1. Add I2C abstraction + PCF8574 LCD expander module.
2. Add DS3231 I2C driver (time read/write, temperature).
3. Introduce simple CMSIS-style delay based on SysTick instead of manual loops.
4. Provide CMake / arm-none-eabi-gcc build alternative.

PRs / issues welcome.

## License

MIT (add LICENSE file if required).
