#include <reg51.h>

void delay();

void main(void){
	while(1){
	P1 = 0xAB;
	delay();
	/*delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
	*/
		P1 = 0xAF ;
	
		delay();
	/*	delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
		delay();
	*/
	}
}

void delay(){
	
	TMOD  =0x01;
	TH0 = 0x4B;
	TL0 = 0xFD;
	TR0 = 1;
	if (TF0 == 1)
		TR0 = 0 ;
	TF0 = 0;
}