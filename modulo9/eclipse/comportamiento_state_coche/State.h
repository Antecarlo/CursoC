/*
 * State.h
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#ifndef STATE_H_
#define STATE_H_

#include <memory>

class State;
#include "Coche.h"

class State {

protected:
	std::unique_ptr<Coche> coche;

public:
	State(Coche * coche);

	virtual void frenar()=0;
	virtual void acelerar()=0;
	virtual void contacto()=0;

	virtual ~State();
};

#endif /* STATE_H_ */
