/*
Modulo 2

Do while con for
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

	for(int i=1;i<=numero*numero;i++){
		if(i%numero==1) printf("\nx\t");
		else printf("x\t");
	}
		
}
