#include "delay.h"
static uint8_t fac_us = 0;

void delay_init(uint8_t SYSCLK) {
HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK_DIV8);
fac_us = SYSCLK / 8;
}

void delay_us(int32_t nus) {
uint32_t temp;
SysTick->LOAD = nus * fac_us;
SysTick->VAL = 0x00;
SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk;
do {
temp = SysTick->CTRL;
} while ((temp & 0x01) && !(temp & (1 << 16)));
SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
SysTick->VAL = 0x00;
}
