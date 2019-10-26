/*
 * ExpResta.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include "ExpResta.h"

ExpResta::ExpResta(std::shared_ptr<Expresion> expresion1,std::shared_ptr<Expresion> expresion2): ExpresionBinaria(expresion1,expresion2){
}

ExpResta::~ExpResta() {
	// TODO Auto-generated destructor stub
}

std::string ExpResta::to_string() {
	return "("+this->expresion1->to_string()+"-"+this->expresion2->to_string()+")";
}

double ExpResta::getValue() {
	return this->expresion1->getValue() - this->expresion2->getValue();
}
