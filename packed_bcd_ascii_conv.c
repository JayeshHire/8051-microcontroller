#include <reg51.h>

//unsigned char [] bcd2ascii(unsigned char unpacked_bcd);
//unsigned char [] unpack(unsigned char packed_bcd);


void main(void){
	unsigned char a = 0x58; //packed bcd value
	
	unsigned char UH = a & 0xF0;
	unsigned char LH = a & 0x0F;
	UH = UH >> 4;
	UH = UH | 0x30;
	LH = LH | 0x30;
	P1 = UH ;
	P2 = LH ;
}


