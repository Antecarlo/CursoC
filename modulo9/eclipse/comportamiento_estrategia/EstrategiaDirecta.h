/*
 * EstrategiaDirecta.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef ESTRATEGIADIRECTA_H_
#define ESTRATEGIADIRECTA_H_

#include "Estrategia.h"

class EstrategiaDirecta : public Estrategia{
public:
	EstrategiaDirecta();

	void ordenar(int * array, int n);

	virtual ~EstrategiaDirecta();
};

#endif /* ESTRATEGIADIRECTA_H_ */
