
#ifndef LISTA_H

	#define LISTA_H

	#include "tipos.h"

	//Definir 2 prototipos: para insertar e imprimir la lista
	TNodoMov * insertarMovimiento(TNodoMov *,TMovimiento);
	void imprimirMovimientos(TNodoMov *);
	void borrarMovimientos(TCliente *,int);
	TNodoMov * borrarElementos (TNodoMov * );
	int buscarMovimiento (TCliente,int);
	void imprimirMovimientoUnico(TNodoMov *, int);

#endif
