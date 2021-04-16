#include <REGX52.H>

void delay()
{
    unsigned char a,b,c;
    for(c=23;c>0;c--)
        for(b=152;b>0;b--)
            for(a=70;a>0;a--);
}


void main(){

	while(1){
		P2 = 0xFE;//1111 1110
		delay();
		//P2 = 0xFF;
		//delay();
		
		P2 = 0xFD;//1111 1101
		delay();
		
		P2 = 0xFB;//1111 1011
		delay();
		
		P2 = 0xF7;//1111 0111
		delay();
		
		P2 = 0xEF;//1110 1111
		delay();
		
		P2 = 0xDE;//1101 1111
		delay();
		
		P2 = 0xBE;//1011 1111
		delay();
		
		P2 = 0x7E;//0111 1111
		delay();
		
	}
}