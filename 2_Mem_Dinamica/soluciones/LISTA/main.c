
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "estructuras.h"
#include "prototipos.h"


#define MAX 50

//----------------------------------------------------------------------------------------------------------------------

void main(){
	TLista *lista = NULL;
	int op;
	char s[20];


	do {
		menu();
		gets(s);
		op = atoi(s);

		switch(op){

			case 1:	// Add nuevas cuentas:
				lista = insertarDatos(lista);
				break;

			case 2:	// Listar cuentas:
				puts("\nLISTADO DE CUENTAS:");
				listarCuentas(lista);
				break;	

			case 3:	// Buscar cuenta:
				buscarCuenta(lista);
				break;

			case 4:	// Borrar cuenta:
				borrarCuenta(&lista);
				break;

			case 5:	// Liberar toda la memoria.
				lista = borrarCuentas(lista);
				break;
		}

	} while (op != 6);
}

//----------------------------------------------------------------------------------------------------------------------

TLista *insertarDatos(TLista *l){
	TDato d;

	leerCuenta(&d);
	l = anyadeCuenta(l, d);
	return(l);

}

//----------------------------------------------------------------------------------------------------------------------

TLista *anyadeCuenta(TLista *l, TDato d){
	// Añade un nuevo nodo a la lista.
	TLista *nodo;

	if (l == NULL){
		// Añade un nuevo nodo.
		nodo = (TLista *)malloc(sizeof(TLista));
		nodo->d = d;
		nodo->sig = NULL;
		l = nodo;
	
	} else 
		l->sig = anyadeCuenta(l->sig, d);

	return(l);
}

//----------------------------------------------------------------------------------------------------------------------

void listarCuentas(TLista *l){

	if (l != NULL){

		imprimeCuenta(&l->d);
		listarCuentas(l->sig);
	}
}

//----------------------------------------------------------------------------------------------------------------------

void buscarCuenta(TLista *l){
	// Localiza una cuenta:
	char s[MAX];
	TLista *nodo = l;
	int existe = 0;

	printf("\nInserte la cuenta a buscar:");
	gets(s);

	while (nodo != NULL){
		if (!strcmp(s, nodo->d.nroCuenta)){
			imprimeCuenta(&nodo->d);
			existe = 1;
			break;
		}
		nodo = nodo->sig;
	}

	if (!existe){
		printf("\nNO EXISTE LA CUENTA ...");
	}
}

//----------------------------------------------------------------------------------------------------------------------


void borrarNodo(TLista **l, char *s){
	TLista *actual, *anterior;
	int encontrado = 0;

	actual = *l;
	anterior = NULL;

		
	while ((actual != NULL) && (!encontrado)){

		encontrado = (strcmp(s, actual->d.nroCuenta) == 0);

		if (!encontrado){
			anterior = actual;
			actual = actual->sig;
		}
	}	
	

	if (actual != NULL){

		if (actual == *l)
			*l = actual->sig;

		else
			anterior->sig = actual->sig;
	
		free(actual->d.dni);
		free(actual->d.nroCuenta);
		free(actual);
		actual = NULL;
		
	} else 
		printf("\nNo se encontro la cuenta a borrar %s", s);
}


//----------------------------------------------------------------------------------------------------------------------

void borrarCuenta(TLista **l){
	// Localiza una cuenta y la borra
	char s[MAX];
	int existe = 0;

	if (l != NULL){
		printf("\nInserte la cuenta a borrar: ");
		gets(s);

		borrarNodo(l, s);
	}
}

//----------------------------------------------------------------------------------------------------------------------


TLista *borrarCuentas(TLista *l){
	// Elimina la memoria de todos los nodos de la lista.
	
	if (l != NULL){
		l->sig = borrarCuentas(l->sig);
		free(l->d.dni);
		free(l->d.nroCuenta);
		free(l);
		l = NULL;
	}
	return(l);
}


//----------------------------------------------------------------------------------------------------------------------

void menu(){
	// Muestra el menú por pantalla.
	printf("\n\nMENU PRINCIPAL");
	printf("\n1.- Insertar datos");
	printf("\n2.- Listar cuentas");
	printf("\n3.- Buscar cuenta");
	printf("\n4.- Borrar cuenta");
	printf("\n5.- Borrar todas las cuentas");
	printf("\n6.- Salir");
	printf("\nOpcion: ");
}


//----------------------------------------------------------------------------------------------------------------------

void leerCuenta(TDato *c){
	// Lee los datos de teclado para una nueva cuenta.
	char s[MAX];
	int l;

	printf("\nIntroduzca nro. de cuenta: ");
	gets(s);
	l = strlen(s);
	c->nroCuenta = (char *)malloc(sizeof(char) * (l + 1));
	strcpy(c->nroCuenta, s);

	
	printf("\nIntroduzca DNI: ");
	gets(s);
	l = strlen(s);
	c->dni = (char *)malloc(sizeof(char) * (l + 1));
	strcpy(c->dni, s);

	printf("\nIntroduzca saldo: ");
	gets(s);
	c->saldo = (float)atof(s);
}

//----------------------------------------------------------------------------------------------------------------------

void imprimeCuenta(TDato *c){
	// Imprime por pantalla los datos de la cuenta.
	printf("\n%s %s %10.2f", c->dni, c->nroCuenta, c->saldo);
}


//----------------------------------------------------------------------------------------------------------------------



