/*
Modulo 2

Do while con for y dibujos
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){
	
	int numero;

	do{
		puts("Dame un numero perteneciente a [5,50]");
		fflush(stdin);
		scanf("%d",&numero);
		
	}while(numero>50 || numero<5);

	for(int i=1;i<=numero;i++){
		for (int j=1;j<=numero;j++){
			if(j!=1 && i!=1 && i!=numero && j!=numero) printf(" \t");
			else printf("x\t");
		}
		printf("\n");
	}
}
