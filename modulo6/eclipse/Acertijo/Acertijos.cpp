/*
 * Acertijos.cpp
 *
 *  Created on: 8 oct. 2019
 *      Author: antonio
 */

#include "Acertijos.h"
#include <cstdlib>
#include <ctime>
#include <iostream>


Acertijos::Acertijos() {
	this->generarClave();
}

void Acertijos::generarClave() {
	this->clave.clear();
	std::string vocales= "AEIOU";
	std::string consonantes = "ZXVBNMSDFGHJKLQWRTYP";

	std::srand(std::time(0));

	for(int i=0;i<2;i++){
		int iVocal = std::rand()%vocales.length();
		int iCons = std::rand()%consonantes.length();
		this->clave = this->clave + consonantes[iCons]+vocales[iVocal];
	}
}

void Acertijos::consultarClave() {
	for (auto c : this->clave)
		std::cout << c << " ";
	std::cout << std::endl;
}

void Acertijos::pedirVC() {

	std::getline(std::cin,)
}

Acertijos::~Acertijos() {
	// TODO Auto-generated destructor stub
}
