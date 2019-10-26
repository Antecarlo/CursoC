/*
Bucle while2:
*/

#include <stdio.h>


int main(){
	int n1=8;
	int n2=4;
	int aux=0;
	int resultado=0;

	while (aux<n1){
		resultado=resultado+n2;
		aux++;
	}
	printf("El resultado de %d por %d es: %d\n",n1,n2,resultado);


	int resultado2=0;	
	for(int i=0;i<n1;i++)
		resultado2=resultado2+n2;
	printf("El resultado de %d por %d es: %d\n",n1,n2,resultado);

}




