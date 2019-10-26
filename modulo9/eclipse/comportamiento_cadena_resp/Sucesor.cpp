/*
 * Sucesor.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include "Sucesor.h"

Sucesor::Sucesor(std::unique_ptr<Sucesor> sucesor) {
	this->sucesor=sucesor;
}

Sucesor::~Sucesor() {
	// TODO Auto-generated destructor stub
}

