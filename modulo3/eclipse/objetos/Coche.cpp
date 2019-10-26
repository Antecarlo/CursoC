/*
 * Coche.cpp
 *
 *  Created on: 25 sept. 2019
 *      Author: antonio
 */

#include "Coche.h"
#include <iostream>

Coche::Coche() {
	// TODO Auto-generated constructor stub
	marca="";
	modelo="";
	matricula="";
	cilindrada=0.0;
	anyo=0;
}


// Constructor
Coche::Coche(std::string marca, std::string modelo, std::string matricula, float cilindrada, int anyo) {
	// TODO Auto-generated constructor stub
	this->marca = marca;
	this->modelo=modelo;
	this->matricula=matricula;
	this->cilindrada=cilindrada;
	this->anyo=anyo;
}

void Coche::imprimir() const{
	/*
	std::cout<< "DATOS DEL COCHE"<< std::endl;
	std::cout<< "Marca: "<< this->marca <<std::endl;
	std::cout<< "Modelo: "<<this->modelo <<std::endl;
	std::cout<< "Matricula: "<<this->matricula<<std::endl;
	std::cout<< "Cilindrada: "<<this->cilindrada <<std::endl;
	std::cout<< "Anyo: "<<this->anyo<<std::endl;
	*/
	std::cout<<"Marca: "<<marca<<", modelo: "<<modelo<<", matricula: "<< matricula<<", cilindrada: "<<cilindrada<<", anyo: "<<anyo << std::endl;
}

void Coche::imprimir(){
	std::cout<<"Marca: "<<marca<<", modelo: "<<modelo<<", matricula: "<< matricula<<", cilindrada: "<<cilindrada<<", anyo: "<<anyo << std::endl;
}

Coche::~Coche() {
	// TODO Auto-generated destructor stub
}

