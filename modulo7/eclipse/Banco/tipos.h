/*
 * tipos.h
 *
 *  Created on: 15 oct. 2019
 *      Author: antonio
 */

#ifndef TIPOS_H_
#define TIPOS_H_

typedef struct{
	char nombre[50];
	int telefono;
} TCliente;

typedef struct{
	int numero;
	int pin;
} TTarjeta;

typedef struct {
	int numero;
	TCliente cliente;
	TTarjeta tarjeta;
	double saldo;
} TCuenta;


#endif /* TIPOS_H_ */
