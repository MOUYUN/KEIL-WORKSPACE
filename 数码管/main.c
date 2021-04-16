#include <REGX52.H>

unsigned char NixieTable[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71,0x00};

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


void Nixie(unsigned char Location,Number){
	switch(Location){
		case 1:
			P2_4 = 1;P2_3 = 1;P2_2 = 1;break;
		case 2:
			P2_4 = 1;P2_3 = 1;P2_2 = 0;break;	
		case 3:
			P2_4 = 1;P2_3 = 0;P2_2 = 1;break;
		case 4:
			P2_4 = 1;P2_3 = 0;P2_2 = 0;break;
		case 5:
			P2_4 = 0;P2_3 = 1;P2_2 = 1;break;
		case 6:
			P2_4 = 0;P2_3 = 1;P2_2 = 0;break;
		case 7:
			P2_4 = 0;P2_3 = 0;P2_2 = 1;break;
		case 8:
			P2_4 = 0;P2_3 = 0;P2_2 = 0;break;
	}
	
	P0 = NixieTable[Number];
}

void main(){
	
	int i,j;
	
	while(1){
		
		for(i=1;i<=8;i++){
			
			for(j=0;j<17;j++){
				Nixie(i,j);
				delay100ms();
			}
		}
		
	}
}


//void main(){
//	
//	P2_4 = 1;
//	P2_3 = 0;
//	P2_2 = 1;

//	P0 = 0x7D;	
//	while(1){
//		
//	}
//}