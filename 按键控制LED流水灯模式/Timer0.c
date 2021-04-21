#include <REGX52.H>

/**
  * @brief   定时器0初始化，1毫秒@12.000MHz
  * @param   void
  * @retval  
**/

void Timer0Init(void)		//1毫秒@12.000MHz
{
	//AUXR &= 0x7F;		//定时器时钟12T模式
	TMOD &= 0xF0;		//设置定时器模式
	TMOD |= 0x01;		//设置定时器模式
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
	
	ET0 = 1;
	EA = 1;
	PT0 = 0;
}

//void Timer0_Routine() interrupt 1{
//	
//	static unsigned int T0Count;


//	T0Count++;
//	TH0 = 64535/256;
//	TL0 = 64535%256;
//	
//	if(T0Count>=1000){
//		T0Count = 0;
//		P2_0 = ~P2_0;;
//	}
//	
//}