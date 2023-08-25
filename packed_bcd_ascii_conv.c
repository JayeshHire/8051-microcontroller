#include <reg51.h>

//unsigned char [] bcd2ascii(unsigned char unpacked_bcd);
//unsigned char [] unpack(unsigned char packed_bcd);

void main(void){
	unsigned char a = 0x58; //packed bcd value
	//unsigned char ascii ;
	unsigned char UH_ascii ;
	unsigned char LH_ascii ;
	//unsigned char b[2] ;
	unsigned char UH = a & 0xF0;
	unsigned char LH = a & 0x0F;
	//b = bcd2ascii(a); // contains ascii value for the above packed bcd value
	UH = UH >> 4;
	UH_ascii = UH | 0x30;
	LH_ascii = LH | 0x30;
	P1 = UH_ascii;
	P2 = LH_ascii;
}

/*
unsigned char [] unpack(unsigned char packed_bcd){
	unsigned char [] a = 
*/
/*
unsigned char [ ] bcd2ascii(unsigned char packed_bcd){
	unsigned char ascii ;
	unsigned char UH_ascii ;
	unsigned char LH_ascii ;
	// UH contains the upper half of the packed_bcd
	unsigned char UH = packed_bcd & 0xF0; //masking the lower 4 bits 
	//LH contains the lower half of the packed_bcd
	unsigned char LH = packed_bcd & 0x0F; // masking the upper 4 bits
	
	UH = UH >> 4;
	UH_ascii = UH | 0x30;
	LH_ascii = LH | 0x30;
	ascii[0] = LH ;
	ascii[1] = UH ;
	return ascii ;
}
	*/

