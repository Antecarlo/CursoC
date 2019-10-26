/*
 * Sucesor.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef SUCESOR_H_
#define SUCESOR_H_

#include "Peticion.h"
#include <memory>

class Sucesor {

protected:
	std::unique_ptr<Sucesor> sucesor;

public:
	Sucesor(std::unique_ptr<Sucesor> sucesor);

	virtual void manejarPeticion(Peticion peticion)=0;

	virtual ~Sucesor();
};

#endif /* SUCESOR_H_ */
