#include "mailun.h"
#include "pwm.h"

//左前轮PA8.PA9
//右前轮PA10,PA11
//左后轮PC6，PC7
//右后轮PC8，PC9
void forward()
{
	TIM1_1PWM_Init(1999,719);
	TIM_SetCompare1(TIM1,1000);
	TIM1_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM1,0);
	//左前轮正转
	TIM1_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM1,1000);
	TIM1_4PWM_Init(1999,719); 
	TIM_SetCompare4(TIM1,0);
	//右前轮正转
	TIM8_1PWM_Init(1999,719); 
	TIM_SetCompare1(TIM8,1000);
	TIM8_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM8,0);
	//左后轮正转
	TIM8_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM8,1000);
	TIM8_4PWM_Init(1999,719); 
	IM_SetCompare4(TIM8,0);
	//右后轮正转
}

void backward()
{
	TIM1_1PWM_Init(1999,719);
	TIM_SetCompare1(TIM1,0);
	TIM1_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM1,1000);
	//左前轮反转
	TIM1_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM1,0);
	TIM1_4PWM_Init(1999,719); 
	TIM_SetCompare4(TIM1,1000);
	//右前轮反转
	TIM8_1PWM_Init(1999,719); 
	TIM_SetCompare1(TIM8,0);
	TIM8_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM8,1000);
	//左后轮反转
	TIM8_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM8,0);
	TIM8_4PWM_Init(1999,719); 
	IM_SetCompare4(TIM8,1000);
	//右后轮反转
}

void moveleft()
{
	//左前轮反转
	//右前轮正转
	//左后轮正转
	//右后轮反转
}
void moveright()
{
	//左前轮正转
	//右前轮反转
	//左后轮反转
	//右后轮正转
}

void turnleft()
{
	TIM1_1PWM_Init(1999,719);
	TIM_SetCompare1(TIM1,0);
	TIM1_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM1,1000);
	//左前轮反转
	TIM1_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM1,1000);
	TIM1_4PWM_Init(1999,719); 
	TIM_SetCompare4(TIM1,0);	
	//右前轮正转
	TIM8_1PWM_Init(1999,719); 
	TIM_SetCompare1(TIM8,0);
	TIM8_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM8,1000);
	//左后轮反转
	TIM8_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM8,1000);
	TIM8_4PWM_Init(1999,719); 
	IM_SetCompare4(TIM8,0);
	//右后轮正转	
}

void turnright()
{
	TIM1_1PWM_Init(1999,719);
	TIM_SetCompare1(TIM1,1000);
	TIM1_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM1,0);
	//左前轮正转
	TIM1_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM1,0);
	TIM1_4PWM_Init(1999,719); 
	TIM_SetCompare4(TIM1,1000);
	//右前轮反转
	TIM8_1PWM_Init(1999,719); 
	TIM_SetCompare1(TIM8,1000);
	TIM8_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM8,0);
	//左后轮正转
	TIM8_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM8,0);
	TIM8_4PWM_Init(1999,719); 
	IM_SetCompare4(TIM8,1000);
	//右后轮反转
}














