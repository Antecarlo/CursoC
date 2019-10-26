/*
 ============================================================================
 Name        : pruebas2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN_INT -32767

typedef struct vector {
	int *datos;
	int n;
} TVector;

// ejemplo:
//typedef unsigned char BYTE;

void init(TVector *);
int empty(TVector);
void add(TVector *, int);
void print(TVector);
void liberar(TVector *);
int numElementos(TVector);

// Funciones para simular una PILA:
// apila y desapilar.
void apilar(TVector *, int);
int desapilar(TVector *);

// Funciones para simular una COLA:
// encolar y desencolar.
void encolar(TVector *, int);
int desencolar(TVector *);


// Funciones de Prueba:
void pruebaVector(){
	TVector v;

	puts("PRUEBAS PARA LAS FUNCIONES DE VECTOR");
	init(&v);

	if (empty(v)){
		puts("El vector esta vacio ...");
	}
	add(&v, 22);
	add(&v, 2);
	add(&v, 122);
	add(&v, 4);
	add(&v, 90);

	printf("\nDespues de insertar el numero de elementos es %d\n", numElementos(v));

	print(v);
	liberar(&v);
}


void pruebaPILA(){
	TVector pila;

	puts("\nPRUEBAS PARA LAS FUNCIONES DE PILA");

	init(&pila);
	apilar(&pila, 3);
	apilar(&pila, 5);
	apilar(&pila, 7);
	apilar(&pila, 9);
	apilar(&pila, 13);
	apilar(&pila, 23);
	printf("\nDespues de insertar el numero de elementos es %d\n", numElementos(pila));

	print(pila);

	printf("\ndesapilar -> %d", desapilar(&pila));
	printf("\ndesapilar -> %d", desapilar(&pila));
	printf("\ndesapilar -> %d\n", desapilar(&pila));

	print(pila);

	if (!empty(pila)) liberar(&pila);
}


void pruebaCOLA(){
	TVector cola;

	puts("\nPRUEBAS PARA LAS FUNCIONES DE COLA");
	init(&cola);
	encolar(&cola, 3);
	encolar(&cola, 5);
	encolar(&cola, 7);
	encolar(&cola, 9);
	encolar(&cola, 13);
	encolar(&cola, 23);
	printf("\nDespues de insertar el numero de elementos es %d\n", numElementos(cola));

	print(cola);

	printf("\ndesencolar -> %d", desencolar(&cola));
	printf("\ndesencolar -> %d", desapilar(&cola));
	printf("\ndesencolar -> %d\n", desapilar(&cola));

	print(cola);

	if (!empty(cola)) liberar(&cola);
}

int main(void) {

	pruebaVector();
	pruebaPILA();
	pruebaCOLA();
	return 0;
}

// PILA:
void apilar(TVector *v, int numero){
	// Añade elementos por el principio.
	int *aux = NULL;
	int i;

	// Reservo nueva memoria:
	aux = (int *)malloc(sizeof(int) * (v->n+1));

	// tengo 1 mas.
	v->n++;

	// Copio los datos:
	for (i = 1 ; i < v->n ; i++)
		aux[i] = v->datos[i-1];

	// Añado en la pos 0.
	aux[0] = numero;

	// Librerar los datos antiguos.
	free(v->datos);

	// Reasignar el puntero.
	v->datos = aux;
}

int desapilar(TVector *v){
	// Elimina el primer elemento de la pila el 0.
	int *aux = NULL;
	int i;
	int numero = MIN_INT;

	if (!empty(*v)){
		// Capturar el primer número:
		numero = v->datos[0];

		// Reservo nueva memoria:
		aux = (int *)malloc(sizeof(int) * (v->n-1));

		for (i = 1; i < v->n ; i++)
			aux[i-1] = v->datos[i];

		v->n--;

		free(v->datos);
		v->datos = aux;
	}
	return numero;
}

// COLA:
void encolar(TVector *v, int numero){
	// Añade elementos por el final.
	int *aux = NULL;
	int i;

	// Reservo nueva memoria:
	aux = (int *)malloc(sizeof(int) * (v->n+1));

	// Copio los datos:
	for (i = 0 ; i < v->n ; i++)
		aux[i] = v->datos[i];

	// tengo 1 mas.
	v->n++;
	aux[v->n - 1] = numero;

	// Librerar los datos antiguos.
	free(v->datos);

	// Reasignar el puntero.
	v->datos = aux;
}

int desencolar(TVector *v){
	int *aux = NULL;
	int i;
	int numero = MIN_INT;

	if (!empty(*v)){
		// Capturar el primer número:
		numero = v->datos[0];

		// Reservo nueva memoria:
		aux = (int *)malloc(sizeof(int) * (v->n-1));

		for (i = 1; i < v->n ; i++)
			aux[i-1] = v->datos[i];

		v->n--;

		free(v->datos);
		v->datos = aux;
	}
	return numero;
}

// Otras funciones:
int numElementos(TVector v){
	return (v.n);
}

void init(TVector *v){
	v->datos = NULL;
	v->n = 0;
}

void print(TVector v){
	int i;

	for (i = 0 ; i < v.n ; i++)
		printf("%d ", v.datos[i]);
}

int empty(TVector v){
	return (v.n) ? 0 : 1;
}

void add(TVector *v, int numero){
	int *aux = NULL;
	int i;

	// Reservo nueva memoria:
	aux = (int *)malloc(sizeof(int) * (v->n+1));

	// Copio los datos:
	for (i = 0 ; i < v->n ; i++)
		aux[i] = v->datos[i];

	// tengo 1 mas.
	v->n++;
	aux[v->n - 1] = numero;

	// Librerar los datos antiguos.
	free(v->datos);

	// Reasignar el puntero.
	v->datos = aux;
}

void liberar(TVector *v){

	if (v->n > 0){
		free(v->datos);
		v->datos = NULL;
		v->n = 0;
	}
}
