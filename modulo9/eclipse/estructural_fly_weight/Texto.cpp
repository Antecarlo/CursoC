/*
 * Texto.cpp
 *
 *  Created on: 17 oct. 2019
 *      Author: antonio
 */

#include "Texto.h"
#include <iostream>

Texto::Texto(FactoriaFlyWeight factoria): factoria(factoria) {
}

void Texto::imprimir() {
	std::cout << "Texto completo: "<< std::endl;
	for(auto letra: this->letras)
		letra.imprimir();

	std::cout << std::endl;
	//factoria.imprimir(); //Al imprimir dentro de texto estamos modificando la copia y si nos sale la salida como queremos
}

void Texto::addLetra(char letra, Estilo e) {

	int codigo=factoria.buscarEstilo(e);
	this->letras.push_back(Caracter(letra,codigo));
}

Texto::~Texto() {
	// TODO Auto-generated destructor stub
}

