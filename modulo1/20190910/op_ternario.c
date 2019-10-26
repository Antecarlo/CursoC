/*
Modulo 2

Operador ternario
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){

	int a=9,b=3,menor;
	
	if(a<b)
		menor=a;
	else
		menor=b;

	// Lo mismo con el operador ?:
	menor=(a<b)?a:b;

	if (a%2==0)
		printf("\n%s","par");
	else
		printf("\n%s","impar");

	//Equivalente
	
	printf("\n%s\n",(a%2==0)?"par":"impar");

}
