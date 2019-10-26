/*
Modulo 2

Imprimir mensajes, numeros, chars ...
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){
	
	int numero=15;
	int num1=012,num2=0xF4;
	char letra='A';
	float precio=9.6;
	double valor=100.99;

	//Imprimir mensajes:
	puts("Mensaje de prueba");
	printf("Otro mensaje\n");
	printf("%s\n","mensaje 2");

	//Imprimir numeros:
	printf("\nEntero: %d, float: %f, double: %lf\n",numero,precio,valor);

	// Reales sin ceros:
	printf("\nReales sin ceros: %g\n",precio);

	// Caracteres
	printf("\nLetra: %c %d\n", letra, letra);

	// Impimir en base 8 y 16:
	printf("\nEntero en B8: %o, B16: %x %X\n", numero, numero, numero);

	//printf("%d",num2);

	// Imprimir con relleno
	printf("\nRelleno: %05d\n",numero);
}
