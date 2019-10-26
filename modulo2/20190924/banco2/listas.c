
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


void imprimirMovimientoUnico(TNodoMov * nodo, int id){

	TNodoMov * aux= nodo;
	int i;

	if(nodo!= NULL){
		i=0;
		while(aux!=NULL && id!=i){
			aux=aux->sig;
			i++;
		}

		if(id==i){
			imprimirFechaHora2((aux->mov).fechaHora);
			printf("\t%-20s",(aux->mov).descripcion);
			printf("\t%15g",(aux->mov).importe);			
		}else{
			printf("Indice no encontrado");
		}
	
	}else{
		printf("La lista esta vacia\n");
	}
}



TNodoMov * borrarElementos (TNodoMov * lista){

	if(lista!=NULL){
		lista->sig=borrarElementos(lista->sig);
		free(lista);
		lista=NULL;
	}
	return lista;
}

void borrarMovimientos(TCliente * clientes,int numClientes){
	
	int i;

	for (i=0;i<numClientes;i++){
		clientes[i].movimientos=borrarElementos(clientes[i].movimientos);
	}
}

int buscarMovimiento (TCliente cliente,int minutos){
	TNodoMov * aux = cliente.movimientos;
	int n=-1;
	
	while (aux !=NULL){
		n++;
		if(((aux->mov).fechaHora).MM==minutos)return n;
		aux=aux->sig;
	}
	return -1;
}



