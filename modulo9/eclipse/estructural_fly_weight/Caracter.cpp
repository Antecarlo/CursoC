/*
 * Caracter.cpp
 *
 *  Created on: 17 oct. 2019
 *      Author: antonio
 */

#include "Caracter.h"
#include <iostream>
#include "Estilo.h"

Caracter::Caracter(char letra, int codEstilo): letra(letra),ptrEstilo(codEstilo) {
}

void Caracter::imprimir() {
	//Aqui a traves del puntero se imprimiria el estilo pero al no tener puntero, lo imprimimos con el metodo del estilo
	std::cout << "Letra: " <<this->letra << std::endl;
	Estilo::getEstilo(ptrEstilo).imprimir();
	std::cout << std::endl;
}


Caracter::~Caracter() {
	// TODO Auto-generated destructor stub
}

