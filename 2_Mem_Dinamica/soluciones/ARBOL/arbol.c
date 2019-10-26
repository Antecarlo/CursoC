
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "estructura.h"
#include "prototipos.h"

#define N 50

void main(){
	TArbol *arbol = NULL;
	int op;
	char s[50];


	do {
		menu();
		fflush(stdin);
		gets(s);
		op = atoi(s);

		switch(op){

			case 1:	// Add nuevos nodos:
						arbol = insertarNodos(arbol);
						break;

			case 2:	// Recorridos
						recorridos(arbol);
						break;	

			case 3:	// Buscar :
						buscarNumero(arbol);
						break;

			case 4:	// Calcular Altura
						printf("\nAltura: %d", altura(arbol));
						break;

			case 5:	// Liberar toda la memoria.
						arbol = liberar(arbol);
						break;
		}

	} while (op != 6);
}

//-----------------------------------------------------------------------------------------------------------------------

void menu(){
	// Muestra el menú por pantalla.
	printf("\n\nMENU PRINCIPAL");
	printf("\n1.- Insertar datos");
	printf("\n2.- Recorridos");
	printf("\n3.- Buscar");
	printf("\n4.- altura");
	printf("\n5.- liberar");
	printf("\n6.- Salir");
	printf("\nOpcion: ");
}

//-----------------------------------------------------------------------------------------------------------------------

TArbol *liberar(TArbol *arbol){

	if (arbol != NULL){
		liberar(arbol->izq);
		liberar(arbol->der);
		free(arbol);
		arbol = NULL;
	}
	return(arbol);
}

//-----------------------------------------------------------------------------------------------------------------------

TArbol *insertarNodos(TArbol *arbol){
	// Inserta nodos.
	char s[N];
	int numero;

	printf("\nInserta un numero:");
	fflush(stdin);
	gets(s);

	numero = atoi(s);

	arbol = insertar(arbol, numero);
	return(arbol);
}

//-----------------------------------------------------------------------------------------------------------------------

TArbol *insertar(TArbol *arbol, int numero){
	
	if (arbol == NULL){
		// Crear el nuevo nodo.
		arbol = (TArbol *)malloc(sizeof(TArbol));
		arbol->izq = NULL;
		arbol->der = NULL;
		arbol->numero = numero;

	} else if (numero > arbol->numero)
		arbol->der = insertar(arbol->der, numero);

	else if (numero < arbol->numero)
		arbol->izq = insertar(arbol->izq, numero);

	else
		printf("Elemento repetido ...");

	return(arbol);
}

//-----------------------------------------------------------------------------------------------------------------------

void buscarNumero(TArbol *arbol){
	char s[N];
	int numero, valor;

	printf("\nInserta un numero:");
	fflush(stdin);
	gets(s);

	numero = atoi(s);

	valor = buscar(arbol, numero);
	if (valor)
		printf("\nEl numero se encuentra en el arbol");
	else
		printf("\nEl numero NO se encuentra en el arbol");

}

//-----------------------------------------------------------------------------------------------------------------------

int buscar(TArbol *arbol, int numero){

	if (arbol == NULL)
		return(0);

	else if (arbol->numero == numero)
		return(1);

	else if (numero < arbol->numero)
		return(buscar(arbol->izq, numero));

	else //if (numero > arbol->numero)
		return(buscar(arbol->der, numero));
}

//-----------------------------------------------------------------------------------------------------------------------

void recorridos(TArbol *arbol){

	printf("\nRecorrido preorder: ");
	preOrden(arbol);

	printf("\nRecorrido postorder: ");
	postOrden(arbol);

	printf("\nRecorrido inorder: ");
	inOrden(arbol);
}

//-----------------------------------------------------------------------------------------------------------------------

void preOrden(TArbol *arbol){

	if (arbol != NULL){
		printf("%5d",arbol->numero);
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

//-----------------------------------------------------------------------------------------------------------------------

void postOrden(TArbol *arbol){

	if (arbol != NULL){		
		postOrden(arbol->izq);
		postOrden(arbol->der);
		printf("%5d",arbol->numero);
	}
}

//-----------------------------------------------------------------------------------------------------------------------

void inOrden(TArbol *arbol){

	if (arbol != NULL){		
		inOrden(arbol->izq);
		printf("%5d",arbol->numero);
		inOrden(arbol->der);		
	}
}

//-----------------------------------------------------------------------------------------------------------------------

int altura(TArbol *arbol){

	if (arbol == NULL)
		return 0;

	else 
		return(1 + fmax(altura(arbol->izq), altura(arbol->der)));
}
