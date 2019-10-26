/*
 * FactoryApple.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#include "FactoryApple.h"
#include "IPhoneX.h"
#include "IPad.h"


FactoryApple::FactoryApple() {
	// TODO Auto-generated constructor stub

}

SmartPhone* FactoryApple::createSmartPhone(int numero) {
	return new IPhoneX(numero);
}

Tablet* FactoryApple::createTablet(int capacidad) {
	return new IPad(capacidad);
}

FactoryApple::~FactoryApple() {
	// TODO Auto-generated destructor stub
}

