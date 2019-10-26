/*
 * Peticion.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include "Peticion.h"

Peticion::Peticion(TiposPeticion tipo, std::string contenido): tipo(tipo),contenido(contenido) {
}

std::string Peticion::getContenido() const {
	return this->contenido;
}

Peticion::~Peticion() {
	// TODO Auto-generated destructor stub
}

