/*
Operaciones con char
*/

#include <stdio.h>

int main(){

	char letra;
	char car='A';

	char num='0';
	int i;

	printf("\nLetra: %c\n",car);
	printf("\nLetra: %d\n",car);

	for(i=65;i<123;i++)
		printf("\nLetra: %c\n",i);
	for(car;car<='Z';car++)
		printf("\nLetra: %c, %d\n",car,car);
}
