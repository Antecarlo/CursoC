/*
 * ExpSuma.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include "ExpSuma.h"

ExpSuma::ExpSuma(std::shared_ptr<Expresion> expresion1,std::shared_ptr<Expresion> expresion2):ExpresionBinaria(expresion1,expresion2) {
	// TODO Auto-generated constructor stub

}

ExpSuma::~ExpSuma() {
	// TODO Auto-generated destructor stub
}

std::string ExpSuma::to_string() {
	return "("+this->expresion1->to_string()+"+"+this->expresion2->to_string()+")";
}

double ExpSuma::getValue() {
	return this->expresion1->getValue() + this->expresion2->getValue();
}