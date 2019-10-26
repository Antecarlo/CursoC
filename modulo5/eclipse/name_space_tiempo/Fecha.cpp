/*
 * Fecha.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "Fecha.h"
#include <iostream>
#include <iomanip>

tiempo::Fecha::Fecha(int d,int M,int y): d(d),M(M),y(y){
}

std::ostream & tiempo::operator<<(std::ostream & os, const tiempo::Fecha & fecha){
		return os << std::setw(2) << std::setfill('0') << fecha.d << "/"
				<< std::setw(2) << std::setfill('0') << fecha.M << "/"
				<< std::setw(2) << std::setfill('0') << fecha.y;
}

void tiempo::Fecha::imprimir() const{
	std::cout << *this << std::endl;
}

tiempo::Fecha::~Fecha() {
	// TODO Auto-generated destructor stub
}

