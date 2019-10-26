/*
 * Servidor.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include "Servidor.h"

#include <iostream>

Servidor::Servidor() {
	// TODO Auto-generated constructor stub

}

Servidor::~Servidor() {
	// TODO Auto-generated destructor stub
}

void Servidor::descargarURL(std::string url) {
	std::cout << "La URL "<< url<< " se esta descargando..." << std::endl;
}
