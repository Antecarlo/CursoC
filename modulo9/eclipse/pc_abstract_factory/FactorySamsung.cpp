/*
 * FactorySamsung.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#include "FactorySamsung.h"
#include "S10.h"
#include "GalaxyA.h"

FactorySamsung::FactorySamsung() {
	// TODO Auto-generated constructor stub

}

SmartPhone* FactorySamsung::createSmartPhone(int numero) {
	return new S10(numero);
}

Tablet* FactorySamsung::createTablet(int capacidad) {
	return new GalaxyA (capacidad);
}

FactorySamsung::~FactorySamsung() {
	// TODO Auto-generated destructor stub
}

