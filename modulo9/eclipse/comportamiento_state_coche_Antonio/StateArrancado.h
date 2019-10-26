/*
 * StateArrancado.h
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#ifndef STATEARRANCADO_H_
#define STATEARRANCADO_H_

#include "State.h"

class StateArrancado : public State {
public:
	StateArrancado();
	void acelerar(Coche &coche);
	void frenar(Coche &coche);
	void contacto(Coche &coche);
	virtual ~StateArrancado();
};

#endif /* STATEARRANCADO_H_ */
