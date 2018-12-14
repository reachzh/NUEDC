#include "led.h"
#include "delay.h"
#include "sys.h"
#include "pwm.h"
//ALIENTEK Mini STM32开发板范例代码8
//PWM输出实验   
//技术支持：www.openedv.com
//广州市星翼电子科技有限公司

 int main(void)
 {	
	//u16 led0pwmval=0;    
	//u8 dir=1;	
	delay_init();	    	 //延时函数初始化	  
	LED_Init();		  	//初始化与LED连接的硬件接口
	TIM1_1PWM_Init(1999,719);
	TIM1_2PWM_Init(1999,719); 
	 
	TIM1_3PWM_Init(1999,719); 
	TIM1_4PWM_Init(1999,719); 
	 
	TIM8_1PWM_Init(1999,719); 
	TIM8_2PWM_Init(1999,719); 
	 
	TIM8_3PWM_Init(1999,719); 
	TIM8_4PWM_Init(1999,719); 
	 
	TIM2_3PWM_Init(1999,719); 
	TIM2_4PWM_Init(1999,719); 
	TIM3_2PWM_Init(1999,719); 


  			 
		TIM_SetCompare1(TIM1,1000);
		TIM_SetCompare2(TIM1,0);
		
		TIM_SetCompare3(TIM1,1000);		
		TIM_SetCompare4(TIM1,1000);
		
		TIM_SetCompare1(TIM8,1000);
		TIM_SetCompare2(TIM8,1000);
		
		TIM_SetCompare3(TIM8,1000);
		TIM_SetCompare4(TIM8,1000);
		
		TIM_SetCompare3(TIM2,1000);
		TIM_SetCompare4(TIM2,1000);
		TIM_SetCompare2(TIM3,1000);


	} 

