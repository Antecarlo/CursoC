/*
 * FactorySamsung.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef FACTORYSAMSUNG_H_
#define FACTORYSAMSUNG_H_

#include "Factory.h"

class FactorySamsung : public Factory{
public:
	FactorySamsung();

	SmartPhone * createSmartPhone(int numero);
	Tablet * createTablet(int capacidad);

	virtual ~FactorySamsung();
};

#endif /* FACTORYSAMSUNG_H_ */
