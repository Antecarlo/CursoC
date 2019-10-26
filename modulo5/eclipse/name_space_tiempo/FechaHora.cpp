/*
 * FechaHora.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "FechaHora.h"

#include<iostream>
#include<string>
#include<iomanip>

tiempo::FechaHora::FechaHora(int horas, int minutos, int segundos,int d,int M,int y): tiempo::Hora(horas,minutos,segundos), tiempo::Fecha(d,M,y) {
}

std::ostream & tiempo::operator<<(std::ostream & os, const tiempo::FechaHora & fechaHora){
	return os << static_cast<tiempo::Fecha>(fechaHora)<< " "<< static_cast<tiempo::Hora>(fechaHora);
}

void tiempo::FechaHora::imprimir() const{
	std::cout << * this << std::endl;
}

tiempo::FechaHora::~FechaHora() {
	// TODO Auto-generated destructor stub
}

