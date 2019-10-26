/*
Modulo 2

Imprimir en binario

*/

//Ficheros de encabezado
#include<stdio.h>

int main(){

	unsigned char num1=0x4C; //0100 1100	
	
	for (int i=7;i>=0;i--){
		if((1<<i & num1)>0) printf("1");
		else printf("0");		
	}
	printf("\n");
}
