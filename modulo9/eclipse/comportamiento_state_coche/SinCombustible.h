/*
 * SinCombustible.h
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#ifndef SINCOMBUSTIBLE_H_
#define SINCOMBUSTIBLE_H_

#include "State.h"

class SinCombustible: public State {
public:
	SinCombustible(Coche * coche);

	void frenar();
	void acelerar();
	void contacto();

	virtual ~SinCombustible();
};

#endif /* SINCOMBUSTIBLE_H_ */
