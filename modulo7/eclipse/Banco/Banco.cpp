/*
 * Banco.cpp
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#include "Banco.h"

#include <iostream>

Banco::Banco(std::string nombre): nombre(nombre) {}

Cuenta Banco::getCuenta(int numero) {
	return this->cuentas.at(numero);//Lanza excepcion si no encuentra el numero
}

void Banco::listarCuentas() {
	std::cout << "Listado de cuentas: "<< std::endl;
	//for(auto & [numero,cuenta]:this->cuentas)
		//cuenta.imprimir();
	for (auto c: this->cuentas)
		c.second.imprimir();
	std::cout << std::endl;
}

void Banco::addCuenta(Cuenta cuenta) {
	//this->cuentas.insert(std::pair<cuenta.getNumero(),cuenta>);
	this->cuentas[cuenta.getNumero()]=cuenta;
}

Banco::~Banco() {
	// TODO Auto-generated destructor stub
}

