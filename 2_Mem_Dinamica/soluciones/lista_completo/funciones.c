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


#include "funciones.h"


void insertarPrimero(int nuevoNumero, TLista **lista ){

	// Creamos un nuevo nodo:
	TLista *nodo = (TLista *)malloc(sizeof(TLista));

	// Rellenar el nuevo nodo:
	nodo->numero = nuevoNumero;
	nodo->sig = *lista;

	*lista = nodo;
}



void insertarUltimo(int nuevoNumero, TLista **lista){
	// Insertamos al final de la lista:
	TLista *aux = NULL;

	// Crear el nuevo nodo:
	TLista *nuevoNodo = (TLista *)malloc(sizeof(TLista));
	nuevoNodo->numero=nuevoNumero;
	nuevoNodo->sig=NULL;

	if (*lista == NULL)
		// Si la lista está vacía:
		*lista = nuevoNodo;

	else {
		// Tenemos que recorrer la lista hasta el final:
		aux = *lista;

		while (aux->sig != NULL)
			aux = aux->sig;

		aux->sig = nuevoNodo;

	}

}

void insertarOrdenado(int nuevoNumero, TLista **lista){
	// Inserta un nuevo nodo de forma ordenada:
	TLista *aux = NULL, *ant = NULL;

		// Crear el nuevo nodo:
		TLista *nuevoNodo = (TLista *)malloc(sizeof(TLista));
		nuevoNodo->numero=nuevoNumero;
		nuevoNodo->sig=NULL;

		if (*lista == NULL)
			// Si la lista está vacía:
			*lista = nuevoNodo;

		else {
			// Insertamos de forma ordenada:
			aux = *lista;
			ant = NULL;

			while ((aux != NULL) && aux->numero < nuevoNumero){
				ant = aux;
				aux=aux->sig;
			}

			if (ant == NULL){
				// Va en la primera posicion:
				nuevoNodo->sig = *lista;
				*lista = nuevoNodo;

			} else if (aux == NULL){
				// Va al final de la lista:
				nuevoNodo->sig = NULL;
				ant->sig = nuevoNodo;

			} else {
				// Va en medio:
				ant->sig = nuevoNodo;
				nuevoNodo->sig = aux;
			}
		}
}


int numElementosLista(TLista *lista){

	if (lista == NULL)
		return 0;
	else
		return 1+numElementosLista(lista->sig);
}

void imprimeLista(TLista *lista){

	if (lista != NULL){
		printf("%d ", lista->numero);
		imprimeLista(lista->sig);
	}
}

TLista *liberarLista(TLista *lista){

	if (lista != NULL){
		lista->sig = liberarLista(lista->sig);
		free(lista);
		lista = NULL;

	}
	return (lista);
}

void liberarLista2(TLista **lista){
	TLista *aux = *lista;

	if (aux != NULL){
		*lista = aux->sig;
		free(aux);
		liberarLista2(lista);
	}
}


