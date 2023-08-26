#include <reg51.h>

void main(void){
	unsigned char a[] = {0x35, 0xAD, 0x5B, 0x21, 0xC2};
	unsigned char sum = 0 ;
	unsigned char i ;
	unsigned char checksum ;
	for ( i = 0 ; i < 5 ; i++){
		sum = sum + a[i];
	}
	checksum = ~sum + 1;
	
	P1 = checksum ;
}
	