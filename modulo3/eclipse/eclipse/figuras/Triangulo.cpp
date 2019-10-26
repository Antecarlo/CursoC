/*
 * triangulo.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "Triangulo.h"
#include <string>
#include <iostream>

Triangulo::Triangulo(std::string etiqueta,std::string color, double base, double altura):Figura2D (etiqueta, color) {
	this->base=base;
	this->altura=altura;
}

double Triangulo::area() {
	return this->altura * this->base /2;
}

void Triangulo::dibujar() {
	std::cout << "Triangulo:" << this->getEtiqueta() << ", Color: "<< this->getColor()<< ", Altura: " << this->altura<< ", Base: "<< this->base << std::endl;
}

Triangulo::~Triangulo() {
	// TODO Auto-generated destructor stub
}
