/*
 * IPad.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#include "IPad.h"
#include <iostream>

IPad::IPad(int capacidad): Tablet(capacidad) {
	// TODO Auto-generated constructor stub
}

void IPad::internet() {
	std::cout << "Conectar a internet con IPad. Capacidad: "<< this->capacidadTarjeta << std::endl;
}

IPad::~IPad() {
	// TODO Auto-generated destructor stub
}

