#include <REGX52.H>
#include <INTRINS.H>

#include "TIMER0.h"
#include "Key.h"

unsigned char KeyNum,LEDMode;


//void Timer0_Init(){

//	TMOD= 00000001;//00000001
//	TMOD = TMOD&0xF0;//把TMOD的低四位清零，高四位保持不变
//	TMOD = TMOD|0x01;//把TMOD的最低位置一，高四位保持不变
//	TF0 = 0;
//	TR0 = 1;  
//	TH0 = 64535/256;
//	TL0 = 64535%256;
//	ET0 = 1;
//	EA = 1;
//	PT0 = 0;
//}

void main(){
	
	P2 = 0xFE;

	Timer0Init();
	
	while(1){
	
		KeyNum = Key();
		if(KeyNum){
		
			if(KeyNum==1){
			
				LEDMode++;
				if(LEDMode>=2){
					LEDMode = 0;
				}
			
			}
			
//			if(KeyNum==2){
//			
//				P2_2=~P2_2;
//			
//			}
//			
//			if(KeyNum==3){
//			
//				P2_3=~P2_3;
//			
//			}
//			
//			if(KeyNum==4){
//			
//				P2_4=~P2_4;
//			
//			}
			
		}
	
	}

}



void Timer0_Routine() interrupt 1{
	
	static unsigned int T0Count;

	TH0 = 0x18;
	TL0 = 0xFC;
	T0Count++;
	
	if(T0Count>=500){
		T0Count = 0;
		
		if(LEDMode == 0){
		
			P2 = _crol_(P2,1);
			
		}
		
		if(LEDMode == 1){
		
			P2 = _cror_(P2,1);
			
		}
	}
	
}