/*
 * FactoriaFlyWeight.cpp
 *
 *  Created on: 17 oct. 2019
 *      Author: antonio
 */

#include "FactoriaFlyWeight.h"
#include <algorithm>
#include <iostream>

FactoriaFlyWeight::FactoriaFlyWeight( ) {

}


FactoriaFlyWeight::FactoriaFlyWeight(Estilo estilo) {
	this->estilos.insert(estilo.getCodigo());
}

int FactoriaFlyWeight::buscarEstilo(Estilo e) {

	int codigo = e.getCodigo();
	auto it = this->estilos.find(codigo);

	if(it==this->estilos.end()) this->estilos.insert(codigo);
	return codigo;
}

void FactoriaFlyWeight::imprimir() {
	std::cout << "Factoria de estilos: "<< std::endl;
	for (int codigo : this->estilos)
		Estilo::getEstilo(codigo).imprimir();
}

FactoriaFlyWeight::~FactoriaFlyWeight() {
	// TODO Auto-generated destructor stub
}

