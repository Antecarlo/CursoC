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

	public:
		State(){}
		virtual void acelerar(Coche &)=0;
		virtual void frenar(Coche &)=0;
		virtual void contacto(Coche &)=0;
		virtual ~State(){}
};

#endif /* STATE_H_ */
