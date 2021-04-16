#include <REGX52.H>

#include "Delay.h"

/**
  * @brief  
  * @param  
  * @retval 
  */
unsigned char MartrixKey(){
	unsigned char KeyNumber = 0;
	
	P1 = 0xFF;
	P1_3 =  0;
	if(P1_7==0){
		delay100ms();
		while(P1_7==0){
			delay100ms();
			KeyNumber = 1;
		}
	}
	if(P1_6==0){
		delay100ms();
		while(P1_6==0){
			delay100ms();
			KeyNumber = 5;
		}
	}
	if(P1_5==0){
		delay100ms();
		while(P1_5==0){
			delay100ms();
			KeyNumber = 9;
		}
	}
	if(P1_4==0){
		delay100ms();
		while(P1_4==0){
			delay100ms();
			KeyNumber = 13;
		}
	}
	
	P1 = 0xFF;
	P1_2 =  0;
	if(P1_7==0){
		delay100ms();
		while(P1_7==0){
			delay100ms();
			KeyNumber = 2;
		}
	}
	if(P1_6==0){
		delay100ms();
		while(P1_6==0){
			delay100ms();
			KeyNumber = 6;
		}
	}
	if(P1_5==0){
		delay100ms();
		while(P1_5==0){
			delay100ms();
			KeyNumber = 10;
		}
	}
	if(P1_4==0){
		delay100ms();
		while(P1_4==0){
			delay100ms();
			KeyNumber = 14;
		}
	}
	
	P1 = 0xFF;
	P1_1 =  0;
	if(P1_7==0){
		delay100ms();
		while(P1_7==0){
			delay100ms();
			KeyNumber = 3;
		}
	}
	if(P1_6==0){
		delay100ms();
		while(P1_6==0){
			delay100ms();
			KeyNumber = 7;
		}
	}
	if(P1_5==0){
		delay100ms();
		while(P1_5==0){
			delay100ms();
			KeyNumber = 11;
		}
	}
	if(P1_4==0){
		delay100ms();
		while(P1_4==0){
			delay100ms();
			KeyNumber = 15;
		}
	}
	
	P1 = 0xFF;
	P1_0 =  0;
	if(P1_7==0){
		delay100ms();
		while(P1_7==0){
			delay100ms();
			KeyNumber = 4;
		}
	}
	if(P1_6==0){
		delay100ms();
		while(P1_6==0){
			delay100ms();
			KeyNumber = 8;
		}
	}
	if(P1_5==0){
		delay100ms();
		while(P1_5==0){
			delay100ms();
			KeyNumber = 12;
		}
	}
	if(P1_4==0){
		delay100ms();
		while(P1_4==0){
			delay100ms();
			KeyNumber = 16;
		}
	}
	
	
	return KeyNumber;
}