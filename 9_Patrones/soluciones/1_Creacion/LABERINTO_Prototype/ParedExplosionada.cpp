/*
 * ParedExplosionada.cpp
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#include "ParedExplosionada.h"

ParedExplosionada::ParedExplosionada() : Pared(){}

ParedExplosionada::ParedExplosionada(const ParedExplosionada &otra) : Pared(otra){}

void ParedExplosionada::entrar(){
	cout << "Atravesamos la pared EXPLOSIONADA" << endl;
}

ParedExplosionada *ParedExplosionada::clonar(){
	return new ParedExplosionada(*this);
}

ParedExplosionada::~ParedExplosionada(){}
