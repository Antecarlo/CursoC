/*
 * ConstructorLaberintoContador.cpp
 *
 *  Created on: 10/07/2009
 *      Author: Administrador
 */


#include "ConstructorLaberintoContador.h"

ConstructorLaberintoContador::ConstructorLaberintoContador(){
	this->_puertas = this->_habitaciones = 0;
}

void ConstructorLaberintoContador::construirLaberinto(){}

void ConstructorLaberintoContador::construirHabitacion(int n){
	this->_habitaciones++;
}

void ConstructorLaberintoContador::construirPuerta(int h1, int h2){
	this->_puertas++;
}

void ConstructorLaberintoContador::obtenerConteo(int &h, int &p) const {
	h = this->_habitaciones;
	p = this->_puertas;
}

ConstructorLaberintoContador::~ConstructorLaberintoContador(){}
