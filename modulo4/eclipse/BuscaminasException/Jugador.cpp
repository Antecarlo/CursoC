/*
 * Jugador.cpp
 *
 *  Created on: 3 oct. 2019
 *      Author: antonio
 */

#include "Jugador.h"
#include <iostream>


Jugador::Jugador(std::string alias) {
this->alias=alias;
}

Coordenada Jugador::getCoordenada() {
	Coordenada c;
	std::cout << "Introduce coordenada: " << std::endl;
	std::cin >> c;
	return c;
}

Jugador::~Jugador() {
	// TODO Auto-generated destructor stub
}

