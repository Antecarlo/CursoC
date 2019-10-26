/*
 * Coche.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#include "Coche.h"
#include "Apagado.h"

Coche::Coche(int combustible,int velocidad): combustible(combustible), velocidad(velocidad) {
	this->estado = std::unique_ptr<State>(new Apagado(this));
}

void Coche::frenar() {
	this->estado->frenar();
}

void Coche::acelerar() {
	this->estado->acelerar();
}

void Coche::contacto() {
	this->estado->contacto();
}

Coche::~Coche() {
	// TODO Auto-generated destructor stub
}

