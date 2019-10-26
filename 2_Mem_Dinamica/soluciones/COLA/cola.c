#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 100

#include "tipos.h"
#include "funciones.h"

//-------------------------------------------------------------------------------------------------------------------------

int main(){
	// Rellenar la cola con numeros aleatorios:
	TCola cola;
	int numero, i;
	
	srand(time(NULL));
	crearCola(&cola);

	for (i = 0 ; i < 20 ; i++){
		numero = rand() % 100;
		printf("\nNumero generado: %d", numero);
		encolar(&cola, numero);
	}
	

	// Imprimir el contenido de la cola.
	printf("\n\nTengo los siguientes numeros en la cola:");
	while (!colaVacia(&cola))
		printf("\n%d", desencolar(&cola));

	printf("\n");
}

//-------------------------------------------------------------------------------------------------------------------------

TNodo *crearNodo(int n){
	// Crea un nuevo nodo y lo devuelve.
	TNodo *nuevo;

	nuevo = (TNodo *)malloc(sizeof(TNodo));
	nuevo->numero = n;
	nuevo->sig = NULL;

	return(nuevo);
}	

//-------------------------------------------------------------------------------------------------------------------------

void crearCola(TCola *cola){
	cola->inicio=NULL;
	cola->fin=NULL;
}

//-------------------------------------------------------------------------------------------------------------------------

int colaVacia(TCola *cola){
	return(cola->inicio == NULL);
}

//-------------------------------------------------------------------------------------------------------------------------

void encolar(TCola *cola, int n){
	TNodo *nuevo;

	nuevo = crearNodo(n);

	if (colaVacia(cola))
		cola->inicio = nuevo;

	else
		cola->fin->sig = nuevo;

	cola->fin = nuevo;
}

//-------------------------------------------------------------------------------------------------------------------------

int desencolar(TCola *cola){
	TNodo *ini;
	int n;

	if (! colaVacia(cola)){
		ini = cola->inicio;
		n =  cola->inicio->numero;
		cola->inicio = cola->inicio->sig;
		free(ini);
		return(n);

	} else {
		printf("\nLa cola esta vacia ...");
		return -1;
	}
}

//-------------------------------------------------------------------------------------------------------------------------
	



