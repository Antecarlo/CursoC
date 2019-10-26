/*
Bucle while:
*/

#include <stdio.h>


// Contador de cifras
int main(){
	int numero=5;
	int aux=0;

	while (numero>0){
		numero=numero/10;
		aux++;
	}
	printf("Numero de cifras: %d\n",aux);
}
