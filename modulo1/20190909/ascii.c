/*
ASCII
*/

#include <stdio.h>

int main(){

	unsigned char i;	
	unsigned char car='0';
	
	for(i=0;i<255;i++)
		printf("\nLetra: %c, %d\n",i,i);		

	for(car=0;car<=255;car++){
		printf("\n%c %d",car,car);
		if(car==255) break; //Rompe el bucle en el ultimo valor, para evitar error de overflow
	}
}
