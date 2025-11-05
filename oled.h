#include "stm32f4xx.h"
#include "string.h"
#include "stdint.h"


void OLED_Init(void);
void OLED_SendCommand(uint8_t cmd);
void OLED_SendData(uint8_t data);
void OLED_SetCursor(uint8_t page, uint8_t col);
void OLED_PrintChar(char ch);
void OLED_PrintString(char *str);
void OLED_Clear(void);
void OLED_DisplayImage(const uint8_t *image);
void oled_update_pixel(uint8_t page, uint8_t column, uint8_t data);
void OLED_RangeClear(uint8_t page, uint8_t col);
void OLED_rClear(uint8_t page, uint8_t col2);
