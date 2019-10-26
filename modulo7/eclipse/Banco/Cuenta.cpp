/*
 * Cuenta.cpp
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#include "Cuenta.h"
#include <iostream>

Cuenta::Cuenta(){
	this->numero=0;
	this->saldo=0.0;
}

Cuenta::Cuenta(int numero,Cliente cliente, double saldo): numero(numero), cliente(cliente),saldo(saldo) {
}

void Cuenta::addMovimiento(Movimiento mov) {
	this->movimientos.push_back(mov);
}

void Cuenta::imprimir() {
	std::cout << "Datos de la cuenta" << std::endl;
	std::cout << "CC. "<< this->numero << std::endl;
	this->cliente.imprimir();
	this->tarjeta.imprimir();
	std::cout << "\nMovimientos: "<< std::endl;
	for (auto m: this->movimientos)
		m.imprimir();
	std::cout << "Saldo: " << this->saldo << std::endl;
}

Cuenta::~Cuenta() {
	// TODO Auto-generated destructor stub
}

