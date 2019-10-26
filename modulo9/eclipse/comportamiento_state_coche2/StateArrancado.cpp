/*
 * StateArrancado.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#include <iostream>
#include "StateArrancado.h"

StateArrancado::StateArrancado() {
	// TODO Auto-generated constructor stub

}

void StateArrancado::acelerar(Coche& coche) {
	std::cout << "Acelerar en state arrancado" << std::endl;
}

void StateArrancado::frenar(Coche& coche) {
	std::cout << "Frenar en state apagado" << std::endl;
}

void StateArrancado::contacto(Coche& coche) {
	std::cout << "Contacto en state apagado" << std::endl;
}

StateArrancado::~StateArrancado() {
	// TODO Auto-generated destructor stub
}

