/*
 * Tarjeta.cpp
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#include "Tarjeta.h"
#include <iostream>

Tarjeta::Tarjeta(int numero, int pin): numero(numero), pin(pin) {
}

bool Tarjeta::operator ==(const Tarjeta& t) {
	return this->numero == t.numero && this->pin== t.pin;
}

void Tarjeta::imprimir() {
	std::cout << "Datos de la tarjeta: " << std::endl;
	std::cout << "Numero: " <<this->numero << std::endl;
	std::cout << "Pin: "<< pin<< std::endl;
}

Tarjeta::~Tarjeta() {
	// TODO Auto-generated destructor stub
}
