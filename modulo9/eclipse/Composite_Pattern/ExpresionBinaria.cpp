/*
 * ExpresionBinaria.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include "ExpresionBinaria.h"
ExpresionBinaria::ExpresionBinaria(std::shared_ptr<Expresion> expresion1,std::shared_ptr<Expresion> expresion2) {
	this->expresion1=expresion1;
	this->expresion2=expresion2;

	//std::shared_ptr<State>(new Parado())
}

ExpresionBinaria::~ExpresionBinaria() {
	// TODO Auto-generated destructor stub
}

