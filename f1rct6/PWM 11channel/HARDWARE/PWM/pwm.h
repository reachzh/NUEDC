#ifndef __PWM_H
#define __PWM_H
#include "sys.h"



void TIM1_1PWM_Init(u16 arr,u16 psc);//PA8
void TIM1_2PWM_Init(u16 arr,u16 psc);//PA9
void TIM1_3PWM_Init(u16 arr,u16 psc);//PA10
void TIM1_4PWM_Init(u16 arr,u16 psc);//PA11
void TIM8_1PWM_Init(u16 arr,u16 psc);//PC6
void TIM8_2PWM_Init(u16 arr,u16 psc);//PC7
void TIM8_3PWM_Init(u16 arr,u16 psc);//PC8
void TIM8_4PWM_Init(u16 arr,u16 psc);//PC9
void TIM3_2PWM_Init(u16 arr,u16 psc);//PB5
void TIM2_3PWM_Init(u16 arr,u16 psc);//PB10
void TIM2_4PWM_Init(u16 arr,u16 psc);//PB11

#endif
