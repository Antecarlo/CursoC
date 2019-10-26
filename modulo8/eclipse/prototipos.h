
#ifndef PROTOTIPOS_H
	#define PROTOTIPOS_H
	
	#include "tipos.h"

	TFechaHora ahora();
	void imprimirFechaHora(TFechaHora);
	void imprimirFechaHora2(TFechaHora);
	int pantalla1(TCliente *, long);
	int pantalla2(char * nombre);
	void saldo(TCliente *, int);
	void retirar(TCliente * ,int);
	void cajero(int *, int, int);
	void movimientos(TCliente *,int);
	void ingresar(TCliente *,int);
	void cambiarPin(TCliente *, int);
	void borrarMovClientes(TCliente *, int);
	void buscarMov(TCliente *,int);

#endif
