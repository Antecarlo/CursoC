/*
 * StateApagado.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#include <iostream>
#include "StateApagado.h"
#include "StateArrancado.h"

StateApagado::StateApagado() {
}

void StateApagado::acelerar(Coche& coche) {
	std::cout << "Acelerar en state apagado" << std::endl;
}

void StateApagado::frenar(Coche& coche) {
	std::cout << "Frenar en state apagado" << std::endl;
}

void StateApagado::contacto(Coche& coche) {
	std::cout << "Contacto en state apagado" << std::endl;

	coche.setEstadoActual(std::shared_ptr<State>(new StateArrancado()));
}

StateApagado::~StateApagado() {
	// TODO Auto-generated destructor stub
}
