
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#include "listas.h"
#include "tipos.h"
#include "prototipos.h"


TNodoMov * insertarMovimiento(TNodoMov * movimientos,TMovimiento movimiento){

	TNodoMov * nuevo;

	//Crear el nodo
	nuevo=(TNodoMov *) malloc(sizeof(TNodoMov));

	//Copiar la informacion
	nuevo->mov=movimiento;
	nuevo->sig=NULL;

	//Enganchar con la lista
	nuevo->sig=movimientos;
	movimientos=nuevo;

	return movimientos;
}


void imprimirMovimientos(TNodoMov * nodo){

	if(nodo !=NULL){
		imprimirFechaHora2((nodo->mov).fechaHora);
		printf("\t%-20s",(nodo->mov).descripcion);
		printf("\t%15g",(nodo->mov).importe);
		imprimirMovimientos(nodo->sig);
	}else printf("\n");
}

void borrarElementos(TNodoMov ** nodo){
	//Borrar todos los elementos de la lista
	TNodoMov * aux;

	while(* nodo !=NULL){
		aux= * nodo;
		* nodo = (* nodo)->sig;
		free(aux);
		aux=NULL;
	}
}

void borrarMovimientos(TCliente * clientes,int numClientes){
	
	int i;

	for (i=0;i<numClientes;i++){
		borrarElementos(&(clientes[numClientes].movimientos));
	}
}

