/*
ASCII en columnas:
*/

#include <stdio.h>

#define COLS 8

int main(){

	unsigned char i;
	for(i=0;i<=255;i++){
		if(i%8==0){
			printf("\n");
			if(i<32)
				printf("%3d: \t",i);
			else
				printf("%3d:%c\t",i,i);
		}
		else{
			if(i<32)
				printf("%3d: \t",i);
			else
				printf("%3d:%c\t",i,i);
		}
	if (i==255) break;
		
	}

}
