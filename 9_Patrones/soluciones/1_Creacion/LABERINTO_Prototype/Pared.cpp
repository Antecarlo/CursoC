/*
 * Pared.cpp
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */
#include "Pared.h"

Pared::Pared(){}

Pared::Pared(const Pared &otra){}

void Pared::entrar(){
	cout << "Atravesamos la pared" << endl;
}

Pared *Pared::clonar(){
	return new Pared(*this);
}

Pared::~Pared(){}
