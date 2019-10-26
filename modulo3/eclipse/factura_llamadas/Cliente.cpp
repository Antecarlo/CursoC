/*
 * Cliente.cpp
 *
 *  Created on: 2 oct. 2019
 *      Author: antonio
 */

#include "Cliente.h"

Cliente::Cliente(){
	this->numero=0;
}

Cliente::Cliente(Tarifa t,std::string nombre,std::string apellidos,long numero){
	this->nombre=nombre;
	this->apellidos=apellidos;
	this->numero=numero;
	this->tarifa=t;
}

std::ostream & operator <<(std::ostream & os, const Cliente & c){
	return std::cout << "Nombre - " << c.nombre << ", Apellidos - "<< c.apellidos << ", Tno. - "<<c.numero;
}

Cliente::~Cliente() {
	// TODO Auto-generated destructor stub
}
