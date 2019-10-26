/*
 * EstrategiaSortCPP.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef ESTRATEGIASORTCPP_H_
#define ESTRATEGIASORTCPP_H_

#include "Estrategia.h"

class EstrategiaSortCPP : public Estrategia{
public:
	EstrategiaSortCPP();

	void ordenar(int * array, int size);

	virtual ~EstrategiaSortCPP();
};

#endif /* ESTRATEGIASORTCPP_H_ */
