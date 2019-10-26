/*
 * Coche.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#include "Coche.h"
#include "StateApagado.h"

Coche::Coche(std::shared_ptr<State> inicio, int combustible, int velocidad) {
	// TODO Auto-generated constructor stub
	this->combustible=combustible;
	this->velocidad = velocidad;
	this->estadoActual = inicio;
}

void Coche::acelerar() {
	// Los metodos se delegan al estado en el que se encuentra:
	this->estadoActual->acelerar(*this);
}

void Coche::frenar() {
	this->estadoActual->frenar(*this);
}

void Coche::contacto() {
	this->estadoActual->contacto(*this);
}

Coche::~Coche() {
	// TODO Auto-generated destructor stub
}

