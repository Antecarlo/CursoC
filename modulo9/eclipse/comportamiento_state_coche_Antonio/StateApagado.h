/*
 * StateApagado.h
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#ifndef STATEAPAGADO_H_
#define STATEAPAGADO_H_

#include "State.h"
#include <memory>

class StateApagado: public State {
public:
	StateApagado();
	void acelerar(Coche &coche);
	void frenar(Coche &coche);
	void contacto(Coche &coche);
	virtual ~StateApagado();
};

#endif /* STATEAPAGADO_H_ */
