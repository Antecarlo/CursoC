/*
Definir variables, asignar tipos, inicializar.
*/

#include <stdio.h>

int main(){

	//Definir variables enteras:
	int numero;
	int numero2=0;
	
	//Definicion multiple:
	int num1, num2 = 9, num3;

	//Inicializar:
	numero=0;
	num3=2;

	printf("Los numeros son: %d y %d\n",num2,num3);
	printf("\nnum3: %d\n",num3);
	//return 0;

	printf("\nEl int ocupa: %ld bytes\n", sizeof(int)); // Valido tambien: sizeof(numero);
}
