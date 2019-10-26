/*
 * Escena.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef ESCENA_H_
#define ESCENA_H_

#include <vector>
#include <memory>

#include "Figura.h"

class Escena {

	std::vector<std::unique_ptr<Figura>> figuras;

public:
	Escena();

	void dibujar();
	void addFigura(std::unique_ptr<Figura> figura);

	virtual ~Escena();
};

#endif /* ESCENA_H_ */
