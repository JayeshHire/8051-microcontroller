#include <reg51.h>

//function for converting ascii to packed bcd
unsigned char ascii2bcd(unsigned char a, unsigned char b);
	
void main(void){
	unsigned char a = '4';//first ascii character
	unsigned char b = '8';//second ascii character
	unsigned char bcd ;
	bcd = ascii2bcd(a, b);
	P1 = bcd;
}

unsigned char ascii2bcd(unsigned char a, unsigned char b){
	unsigned char bcd ; // bcd will contain packed bcd value for '4' and '8'
	a = a & 0x0F; //masking 3
	b = b & 0x0F;//masking 3
	a = a << 4; 
	bcd = a | b;
	return bcd;
}
	