/*
Modulo 2

Leer de teclado
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){
	
	int numero;
	
	//Mensaje:
	puts("\nTeclear un numero:\n");

	//Limpiamos el buffer de teclado
	fflush(stdin);

	//Le pasamos la dir. de numero, scanf necesita la direccion de la variable a leer
	scanf("%d",&numero);

	//Imprimimos:
	printf("\nEl numero es: %d\n",numero);


	float numero2;
	
	//Mensaje:
	puts("\nTeclear un numero real:\n");

	//Limpiamos el buffer de teclado
	fflush(stdin);

	//Le pasamos la dir. de numero, scanf necesita la direccion de la variable a leer
	scanf("%f",&numero2);

	//Imprimimos:
	printf("\nEl numero real es: %g\n",numero2);


}
