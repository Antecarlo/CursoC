/*
Modulo 2

Leer dos numeros de teclado y decir cual es menor
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){
	
	int num1,num2;
	/*
	puts("Dame numero 1:");	
	fflush(stdin);
	scanf("%d",&num1);

	puts("Dame numero 2:");	
	fflush(stdin);
	scanf("%d",&num2);


	*/

	puts("Numeros:");
	fflush(stdin);
	scanf("%d%d",&num1,&num2);

	if(num1<num2)
		printf("\n%d es menor que %d\n",num1,num2);
	else if(num1==num2)
		printf("\nSon iguales: %d\n",num1);
	else
		printf("\n%d es menor que %d\n",num2,num1);
}
