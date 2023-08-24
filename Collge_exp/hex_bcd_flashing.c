#include <reg51.h>

void delay();

void main(void){
	
	char hex , bcd;
	hex = 0x0; 
	bcd =  0;
	while(1){
	while(1){
	//	
		P2 = bcd ;
		
		delay();
		bcd++ ;
		if (bcd == 10){
			bcd = 0;
			break;
		}
		
	}
		
		while(1){
			delay();
			P2 = hex ;
			hex++ ;
		if (hex == 0xFF){
			hex = 0x0;
			break;
		}
		
	}
}
	
}

void delay(){
	//set timer 0 mode 1
	TMOD = 0x01;
	TH0 = 0x00;
	TL0 = 0x00;
	TR0 = 1;
	
	while(1){
		if (TF0 == 1){
			TR0 = 0;
			TF0 = 0;
			break;
		}	
}
	}
	
	 