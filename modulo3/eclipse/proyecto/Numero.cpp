/*
 * Numero.cpp
 *
 *  Created on: 26 sept. 2019
 *      Author: antonio
 */

#include "Numero.h"

Numero::Numero(int n) {
	this->numero =n;
}

bool Numero::esPar() {
	return this->numero%2==0;
}

bool Numero::esImpar() {
	return this->numero%2!=0;
}

Numero::~Numero() {
	// TODO Auto-generated destructor stub
}

