/*
 * Evento.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "Evento.h"

Evento::Evento(){
	this->numDestino=0;
	this->importe=0;

}

Evento::Evento(long numD,double importe, Fecha fecha, Hora inicio){
	this->fecha=fecha;
	this->horaIn=inicio;
	this->numDestino=numD;
	this->importe=importe;
}

std::ostream & operator <<(std::ostream & os, const Evento &s){
	return os << s.fecha << " " << s.horaIn << " "<< s.importe << " eur.";
}

Evento::~Evento() {
	// TODO Auto-generated destructor stub
}
