/*
 * principal.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#include "State.h"
#include "StateApagado.h"

#include <memory>

#include "Coche.h"

int main(){
	std::shared_ptr<State> inicio(new StateApagado());
	Coche c(inicio);

	c.contacto();
	c.acelerar();
	c.frenar();
}
