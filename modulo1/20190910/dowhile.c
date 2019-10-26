/*
Modulo 2

Do while
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){
	
	int numero;

	do{
		puts("Dame un numero");
		fflush(stdin);
		scanf("%d",&numero);
		
	}while(numero>100 || numero<1);

	printf("Su numero %d, esta comprendido en el intervalo [1 100]\n",numero);
}
