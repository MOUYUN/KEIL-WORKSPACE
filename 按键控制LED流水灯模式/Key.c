#include <REGX52.H>

#include "Dealy.h"


/**
  * @brief   获取独立按键键码
  * @param   
  * @retval  按下按键的键码，范围：0~4，无按键按下时，返回值为0
**/

unsigned char Key(){
	
	unsigned char KeyNumber = 0;
	
	if(P3_1==0){
	
		delay20ms();//消抖
		while(P3_1==0){
			delay20ms();
		}
		
		KeyNumber = 1;
	
	}
	
	if(P3_0==0){
	
		delay20ms();//消抖
		while(P3_0==0){
			delay20ms();
		}
		
		KeyNumber = 2;
	
	}
	
	if(P3_2==0){
	
		delay20ms();//消抖
		while(P3_2==0){
			delay20ms();
		}
		
		KeyNumber = 3;
	
	}
	
	if(P3_3==0){
	
		delay20ms();//消抖
		while(P3_3==0){
			delay20ms();
		}
		
		KeyNumber = 4;
	
	}
	
	return KeyNumber;

}
