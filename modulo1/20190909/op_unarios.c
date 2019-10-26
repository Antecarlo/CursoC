/*
Probar operadores ++ y --
*/

#include <stdio.h>

int main(){
	
	int num1=10, num2=0;

	//Prefijo	
	++num1;

	//Sufijo
	num1++;

	printf("Num1: %d\n",num1);

	//Volver a inicializar:
	num1=10;
	num2=0;

	num1=++num2; //Primero incrementa y luego asigna

	printf("Num1: %d, Num2: %d\n",num1,num2);

	//Volver a inicializar:
	num1=10;
	num2=0;

	num1=num2++; //Primero asigna y luego incrementa

	printf("Num1: %d, Num2: %d\n",num1,num2);

}
