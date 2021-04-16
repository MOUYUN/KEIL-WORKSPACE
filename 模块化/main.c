#include <REGX52.H>

#include "Delay.h"
#include "Nixie.h"

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
