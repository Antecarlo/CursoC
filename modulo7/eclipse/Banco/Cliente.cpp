/*
 * Cliente.cpp
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#include "Cliente.h"
#include <iostream>

Cliente::Cliente(std::string nombre,int telefono): nombre(nombre),telefono(telefono) {
	// TODO Auto-generated constructor stub

}

void Cliente::imprimir() {
	std::cout << "Datos del cliente: " << std::endl;
	std::cout << this->nombre << std::endl;
	std::cout << this->telefono << std::endl;

}

Cliente::~Cliente() {
	// TODO Auto-generated destructor stub
}
