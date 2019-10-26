
#include "listas.h"
#include "tipos.h"
#include "prototipos.h"


void insertarMovimiento(TMovimiento movimiento){

}


void imprimirMovimientos(TNodoMov * nodo){

	if(nodo !=NULL){
		imprimirFechaHora2((nodo->mov).fechaHora);
		printf("%s\n",(nodo->mov).descripcion);
		printf("%f",(nodo->mov).importe);
		imprimirRecur(nodo->sig);
	}else printf("\n");
}
