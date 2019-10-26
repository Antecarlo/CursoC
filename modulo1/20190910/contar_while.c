/*
Modulo 2

Contar los numeros que ha tecleado el usuario. Con un bucle while
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){
	
	int numero=1;
	int cont=0;

	while(numero!=0){
		puts("Dame numero <0 fin>:\n");
		fflush(stdin);
		scanf("%d",&numero);

		if(numero)//Si numero es distinto de cero: if(numero!=0)
			cont++;
	}
	printf("Has tecleado %d numeros:\n",cont);

}
