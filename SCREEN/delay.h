#ifndef __DELAY_H
#define __DELAY_H
#include "main.h"

void delay_init(uint8_t SYSCLK);
void delay_us(int32_t nus);
#endif
