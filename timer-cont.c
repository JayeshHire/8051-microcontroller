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
	// using the timer 0 and mode 1
	TMOD  =0x01;
	
	//setting the time value for about 50 msec
	TH0 = 0x4B;
	TL0 = 0xFD;
	
	//timer start
	TR0 = 1;
	while(1){
	//check for timer overflow 
	if (TF0 == 1){
	//stop timer
		TR0 = 0 ;
		//reset overflow flag
		TF0 = 0;
		break;
	}
}
}