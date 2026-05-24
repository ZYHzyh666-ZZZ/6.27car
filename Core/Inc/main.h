/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
#define u16 uint16_t
#define u8 uint8_t
#define u32 uint32_t
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RGB1_B_Pin GPIO_PIN_2
#define RGB1_B_GPIO_Port GPIOE
#define RGB1_R_Pin GPIO_PIN_3
#define RGB1_R_GPIO_Port GPIOE
#define RGB1_G_Pin GPIO_PIN_4
#define RGB1_G_GPIO_Port GPIOE
#define KEY_1_Pin GPIO_PIN_13
#define KEY_1_GPIO_Port GPIOC
#define KEY_2_Pin GPIO_PIN_0
#define KEY_2_GPIO_Port GPIOC
#define LASTER_1_Pin GPIO_PIN_1
#define LASTER_1_GPIO_Port GPIOC
#define ENCODER1_A_Pin GPIO_PIN_0
#define ENCODER1_A_GPIO_Port GPIOA
#define ENCODER1_B_Pin GPIO_PIN_1
#define ENCODER1_B_GPIO_Port GPIOA
#define INT_Pin GPIO_PIN_12
#define INT_GPIO_Port GPIOE
#define T_RES_Pin GPIO_PIN_13
#define T_RES_GPIO_Port GPIOE
#define LED_Pin GPIO_PIN_14
#define LED_GPIO_Port GPIOE
#define DC_Pin GPIO_PIN_15
#define DC_GPIO_Port GPIOE
#define SPI_NSS_Pin GPIO_PIN_12
#define SPI_NSS_GPIO_Port GPIOB
#define SPI_CLK_Pin GPIO_PIN_13
#define SPI_CLK_GPIO_Port GPIOB
#define SPI_MISO_Pin GPIO_PIN_14
#define SPI_MISO_GPIO_Port GPIOB
#define SPI_MOSI_Pin GPIO_PIN_15
#define SPI_MOSI_GPIO_Port GPIOB
#define L_RES_Pin GPIO_PIN_8
#define L_RES_GPIO_Port GPIOD
#define KEY_3_Pin GPIO_PIN_10
#define KEY_3_GPIO_Port GPIOD
#define RGB2_B_Pin GPIO_PIN_11
#define RGB2_B_GPIO_Port GPIOD
#define RGB2_R_Pin GPIO_PIN_12
#define RGB2_R_GPIO_Port GPIOD
#define RGB2_G_Pin GPIO_PIN_13
#define RGB2_G_GPIO_Port GPIOD
#define I2C_SDA_Pin GPIO_PIN_9
#define I2C_SDA_GPIO_Port GPIOC
#define I2C_SCL_Pin GPIO_PIN_8
#define I2C_SCL_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
