/*
 * Apagado.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#include "Apagado.h"
#include <iostream>

Apagado::Apagado(Coche * coche): State(coche) {

}

Apagado::~Apagado() {
	// TODO Auto-generated destructor stub
}

void Apagado::frenar() {
	std::cout << "El estado se mantiene" << std::endl;
}

void Apagado::acelerar() {
	std::cout << "El estado se mantiene" << std::endl;
}

void Apagado::contacto() {
	this->coche->
}
