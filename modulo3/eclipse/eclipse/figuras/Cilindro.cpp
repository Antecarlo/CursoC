/*
 * cilindro.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "Cilindro.h"
#include <string>
#include<iostream>
#include "constantes.h"

Cilindro::Cilindro(std::string etiqueta, std::string color, double ratio,
		double altura): Figura3D (etiqueta,color) {
		this->ratio=ratio;
		this->altura=altura;
}

void Cilindro::dibujar() {
	std::cout << "Cilindro:" << this->getEtiqueta() << ", Color: "<< this->getColor()<< ", Radio: "<< this->ratio << ", Altura: " << this->altura << std::endl;
}

double Cilindro::volumen() {
	return altura * ratio * ratio * PI;
}

Cilindro::~Cilindro() {
	// TODO Auto-generated destructor stub
}

