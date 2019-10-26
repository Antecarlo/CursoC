/*
 * FactoriaPrototipos.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#include "FactoriaPrototipos2.h"
#include "Circulo.h"
#include "Cilindro.h"
#include "Triangulo.h"
#include "Esfera.h"

#include <iostream>



FactoriaPrototipos2::FactoriaPrototipos2() {
	this->inicializarPrototipos();
}

void FactoriaPrototipos2::inicializarPrototipos() {
	std::cout << "Inicializando prototipos: \n";

	//for(TFiguras f=CILINDRO; f<=TRIANGULO; f++)
	//	this->prototipos[f]=nullptr;

	this->prototipos.insert(std::make_pair(CILINDRO,nullptr));
	this->prototipos.insert(std::make_pair(CIRCULO,nullptr));
	this->prototipos.insert(std::make_pair(ESFERA,nullptr));
	this->prototipos.insert(std::make_pair(TRIANGULO,nullptr));

	/*
	this->prototipos.insert(std::make_pair(CILINDRO, std::shared_ptr<Cilindro>(new Cilindro)));
	this->prototipos.insert(std::make_pair(CIRCULO, std::shared_ptr<Circulo>(new Circulo)));
	this->prototipos.insert(std::make_pair(ESFERA, std::shared_ptr<Esfera>(new Esfera)));
	this->prototipos.insert(std::make_pair(TRIANGULO, std::shared_ptr<Triangulo>(new Triangulo)));
	*/
}

std::shared_ptr<Figura> FactoriaPrototipos2::getPrototipo(TFiguras figura) {
	//Crea el prototipo bajo demanda, comprueba si esta o no creado
	if(this->prototipos.at(figura)==nullptr){
		switch(figura){
			case CILINDRO:
				this->prototipos[figura]= std::shared_ptr<Cilindro>(new Cilindro);
				std::cout << "Inicializando CILINDRO" << std::endl;
				break;
			case CIRCULO:
				this->prototipos[figura]= std::shared_ptr<Circulo>(new Circulo);
				std::cout << "Inicializando CIRCULO" << std::endl;
				break;
			case ESFERA:
				this->prototipos[figura]= std::shared_ptr<Esfera>(new Esfera);
				std::cout << "Inicializando ESFERA" << std::endl;
				break;
			case TRIANGULO:
				this->prototipos[figura]= std::shared_ptr<Triangulo>(new Triangulo);
				std::cout << "Inicializando TRIANGULO" << std::endl;
				break;
		}
	}
	return this->prototipos.at(figura)->clonar();
}


void FactoriaPrototipos2::imprimir(){
	for(auto v: this->prototipos)
		v.second->dibujar();
}


FactoriaPrototipos2::~FactoriaPrototipos2() {
	// TODO Auto-generated destructor stub
}

