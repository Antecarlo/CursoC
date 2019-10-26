/*
Modulo 2

Contar los numeros que ha tecleado el usuario. Con un bucle while
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){
	
	int num1,num2,numi=1;

	puts("Numero:");
	fflush(stdin);
	scanf("%d",&num1);

	while(numi!=0){
		puts("Numero:");
		fflush(stdin);
		scanf("%d",&num2);

		if(num2==0)
			numi=0;
		else
			if(num1>=num2)
				num1=num2;

	}
	printf("El numero menor tecleado es: %d\n",num1);
}
