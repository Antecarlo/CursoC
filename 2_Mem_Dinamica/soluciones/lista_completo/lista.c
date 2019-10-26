/*
 ============================================================================
 Name        : Lista_lineal.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>

#include "tipos.h"
#include "funciones.h"



int  main(int argc, char *argv[]){
	TLista *raiz = NULL;

	// Insertamos elementos 1ª:
	insertarOrdenado(90, &raiz);
	insertarOrdenado(20, &raiz);
	insertarOrdenado(10, &raiz);
	insertarOrdenado(40, &raiz);
	insertarOrdenado(0, &raiz);
	insertarOrdenado(100, &raiz);
	insertarOrdenado(-100, &raiz);

	printf("Numero de elementos de la lista: %d\n", numElementosLista(raiz));


	// Imprimimos toda la lista:
	imprimeLista(raiz);
	liberarLista2(&raiz);
	//raiz = liberarLista(raiz);
	printf("Numero de elementos de la lista: %d\n", numElementosLista(raiz));
	return 0;
}
