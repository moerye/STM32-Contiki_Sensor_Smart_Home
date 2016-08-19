#ifndef __GPIO_H
#define	__GPIO_H


#include "stm32f10x.h"

#define LED_Red_Port    GPIOA
#define LED_Red_Pin     GPIO_Pin_8
#define LED_Red_RCC_Periph RCC_APB2Periph_GPIOA

#define LED_Green_Port  GPIOD
#define LED_Green_Pin   GPIO_Pin_2
#define LED_Green_RCC_Periph RCC_APB2Periph_GPIOD

void LED_GPIO_Config(void);
void LED_Red_On(void);
void LED_Red_Off(void);
void LED_Green_On(void);
void LED_Green_Off(void);

#endif /* __GPIO_H */
