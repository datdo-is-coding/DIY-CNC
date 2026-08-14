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
#include "stm32f1xx_hal.h"
#include "tim.h"
#include "dma.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

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
#define CT_X1_Pin GPIO_PIN_12
#define CT_X1_GPIO_Port GPIOB
#define CT_X1_EXTI_IRQn EXTI15_10_IRQn
#define CT_X2_Pin GPIO_PIN_13
#define CT_X2_GPIO_Port GPIOB
#define CT_X2_EXTI_IRQn EXTI15_10_IRQn
#define CT_Y1_Pin GPIO_PIN_14
#define CT_Y1_GPIO_Port GPIOB
#define CT_Y1_EXTI_IRQn EXTI15_10_IRQn
#define CT_Y2_Pin GPIO_PIN_15
#define CT_Y2_GPIO_Port GPIOB
#define CT_Y2_EXTI_IRQn EXTI15_10_IRQn
#define CT_Z1_Pin GPIO_PIN_8
#define CT_Z1_GPIO_Port GPIOA
#define CT_Z1_EXTI_IRQn EXTI9_5_IRQn
#define CT_Z2_Pin GPIO_PIN_9
#define CT_Z2_GPIO_Port GPIOA
#define CT_Z2_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
