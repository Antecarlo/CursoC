/*
 * Coche.h
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#ifndef COCHE_H_
#define COCHE_H_

#include <memory>

class Coche;
#include "State.h"

class Coche {

	int combustible;
	int velocidad;
	std::unique_ptr<State> estado;

public:
	Coche(int combustible=100,int velocidad=0);

	void frenar();
	void acelerar();
	void contacto();

	virtual ~Coche();
};

#endif /* COCHE_H_ */
