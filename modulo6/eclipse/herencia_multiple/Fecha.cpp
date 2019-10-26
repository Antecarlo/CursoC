/*
 * Fecha.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "Fecha.h"
#include <iostream>
#include <iomanip>

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

bool Fecha::operator <(const Fecha& f) const{
	return this->toInt() < f.toInt();
}

int Fecha::toInt() const{
	//07/10/2019 --> 20191007
	char s[50];
	std::sprintf(s,"%02d%02d%04d",this->y,this->M,this->d);
	return std::atoi(s);
}

Fecha::~Fecha() {
	// TODO Auto-generated destructor stub
}

