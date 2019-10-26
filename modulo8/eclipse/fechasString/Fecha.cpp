/*
 * Fecha.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "Fecha.h"
#include "util.h"

#include <iostream>
#include <iomanip>
#include <sstream>

Fecha::Fecha(int d,int M,int y): d(d),M(M),y(y){
}

std::ostream & operator<<(std::ostream & os, const Fecha & fecha){
		return os << std::setw(2) << std::setfill('0') << fecha.d << "/"
				<< std::setw(2) << std::setfill('0') << fecha.M << "/"
				<< std::setw(2) << std::setfill('0') << fecha.y;
}

void Fecha::imprimir() const{
	std::cout << *this << std::endl;
}

Fecha::Fecha(std::string fecha) {
	std::vector<std::string> campos;

	campos=util::getColumnas (fecha, '/');
	this->d=std::stoi(campos.at(0));
	this->M=std::stoi(campos.at(1));
	this->y=std::stoi(campos.at(2));
}

Fecha::~Fecha() {
	// TODO Auto-generated destructor stub
}

