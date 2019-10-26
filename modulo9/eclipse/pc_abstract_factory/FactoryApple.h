/*
 * FactoryApple.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef FACTORYAPPLE_H_
#define FACTORYAPPLE_H_

#include "SmartPhone.h"
#include "Tablet.h"
#include "Factory.h"

class FactoryApple : public Factory{
public:
	FactoryApple();

	SmartPhone * createSmartPhone(int numero);
	Tablet * createTablet(int capacidad);

	virtual ~FactoryApple();

};

#endif /* FACTORYAPPLE_H_ */
