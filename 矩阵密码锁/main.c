#include <REGX52.H>

#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"

unsigned char KeyNum;
unsigned int Password;

unsigned char count;

void main(){
	
	LCD_Init();
	LCD_ShowString(1,1,"Password(1~16):");
	while(1){
	
		KeyNum = MartrixKey();
		if(KeyNum){
			
			if(KeyNum<=10){//1-10定义为密码区
				if(count<4){//输入次数
					Password *= 10;
					Password += KeyNum%10;//获取一位密码
				}
				count++;
				LCD_ShowNum(2,1,Password,4);
			}
			if(KeyNum==11){//确认
				if(Password==1997){
					LCD_ShowString(2,1,"OK !");
					delay500ms();
					Password = 0;//密码清零
					count = 0;//计数清零
					LCD_ShowString(2,1,"       ");
					LCD_ShowNum(2,1,Password,4);
				}else{
					LCD_ShowString(2,1,"error!");
					delay500ms();
					Password = 0;
					count = 0;
					LCD_ShowString(2,1,"       ");
					LCD_ShowNum(2,1,Password,4);
				}
			}
			if(KeyNum==12){//取消
				LCD_ShowString(2,1,"cancel!");
					delay500ms();
				Password = 0;
				count = 0;
				LCD_ShowString(2,1,"       ");
				LCD_ShowNum(2,1,Password,4);
			}
		}
	}
	
}