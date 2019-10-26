/*
 * FactoriaFlyWeight.h
 *
 *  Created on: 17 oct. 2019
 *      Author: antonio
 */

#ifndef FACTORIAFLYWEIGHT_H_
#define FACTORIAFLYWEIGHT_H_

#include "Estilo.h"
#include <set>

class FactoriaFlyWeight {

	std::set<int> estilos;

public:
	FactoriaFlyWeight();
	FactoriaFlyWeight(Estilo estilo);

	int buscarEstilo (Estilo e);
	void imprimir();

	virtual ~FactoriaFlyWeight();
};

#endif /* FACTORIAFLYWEIGHT_H_ */
