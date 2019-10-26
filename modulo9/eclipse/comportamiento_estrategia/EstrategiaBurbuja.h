/*
 * EstrategiaBurbuja.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef ESTRATEGIABURBUJA_H_
#define ESTRATEGIABURBUJA_H_

#include "Estrategia.h"

class EstrategiaBurbuja : public Estrategia {
public:
	EstrategiaBurbuja();

	void ordenar (int * array, int size);

	virtual ~EstrategiaBurbuja();
};

#endif /* ESTRATEGIABURBUJA_H_ */
