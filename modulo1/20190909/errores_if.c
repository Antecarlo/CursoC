/*
A tener en cuenta con los ifs
*/

#include <stdio.h>

int main(){

	int numero=10;

	//Confundir operador = con ==
	if (numero=0)
		puts("La variable es cero");
	else 
		puts("La variable es <> de 0");

	printf("Numero: %d\n",numero);

	// 0 es false, <> 0 es true
	numero=5;
	
	if (numero)
		puts("\nDistinto de 0");
	else
		puts("\nCero");


	// 2 posibilidad
	if (numero!=0)
		puts("\nDistinto de cero");
	else
		puts("\nCero");

	// Introducir ; tras if statement
	if (numero!=0); //Como cerramos el if statement, se realiza la operacion de la condicion
		puts("Numero distinto de cero");


}

