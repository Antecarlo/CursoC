/*
 * Esfera.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "Esfera.h"
#include "constantes.h"
#include <iostream>
#include <cmath>


Esfera::Esfera(std::string etiqueta,std::string color,double ratio):Figura3D(etiqueta,color) {
	this->ratio=ratio;
}

void Esfera::dibujar() {
	std::cout << "Esfera:" << this->getEtiqueta() << ", Color: "<< this->getColor()<< ", Radio: "<< this->ratio << std::endl;
}

double Esfera::volumen() {
	double aux=pow(ratio,3)*PI;
	return  aux*(4/3);
}

Esfera::~Esfera() {
	// TODO Auto-generated destructor stub
}

