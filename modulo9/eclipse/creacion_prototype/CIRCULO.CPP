/*
 * Circulo.cpp
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#include "Circulo.h"
#include "constantes.h"
#include <string>
#include<iostream>
#include <cmath>


Circulo::Circulo(std::string etiqueta,std::string color,double ratio):Figura2D(etiqueta,color){
	this->ratio=ratio;
}

double Circulo::area() {
 return pow(ratio,2)*PI;
}

void Circulo::dibujar() {

	std::cout << "Circulo:" << this->getEtiqueta() << ", Color: "<< this->getColor()<< ", Radio: "<< this->ratio << std::endl;

}

Circulo::~Circulo() {
	// TODO Auto-generated destructor stub
}


