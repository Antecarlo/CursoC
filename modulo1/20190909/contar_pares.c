/*
Contar pares
*/


#include <stdio.h>

int main(){
	int i, suma=0;
	for (i=1;i<51;i++)
		if (i%2!=1)
			suma++;
	printf("La suma de pares es: %d\n",suma);
}
