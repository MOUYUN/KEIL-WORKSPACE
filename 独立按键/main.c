#include <REGX52.H>
#include <INTRINS.H>

void delay1s(void)   //?? 0us
{
    unsigned char a,b,c;
    for(c=167;c>0;c--)
        for(b=171;b>0;b--)
            for(a=16;a>0;a--);
    _nop_();  //if Keil,require use intrins.h
}

void delay500ms(void)   //?? 0us
{
    unsigned char a,b,c;
    for(c=23;c>0;c--)
        for(b=152;b>0;b--)
            for(a=70;a>0;a--);
}

void delay100ms(void)   //?? 0us
{
    unsigned char a,b,c;
    for(c=19;c>0;c--)
        for(b=20;b>0;b--)
            for(a=130;a>0;a--);
}


unsigned char number = 0;

void main(){
	

	
	while(1){
		if(P3_1==0){
			
			delay100ms();
			
			number++;
			P2 = ~number;
			
			if(number>=256){
				number=0;
			}
		}
	}

//	P2 = 0xFE;
//	P2_0 = 0;
//	P2_1 = 0;
//	while(1){
//		if(P3_1==0 && P3_0==0){
//			//delay1s();
//			P2_0 = 0;
//		}else{
//			P2_0 = 1;
//		}
//	}
	
}