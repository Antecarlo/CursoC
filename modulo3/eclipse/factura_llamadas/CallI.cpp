/*
 * CallI.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "CallI.h"

CallI::CallI(){
this->roaming=0;
}

CallI::CallI(long numD,double roaming, double importe, Fecha fecha, Hora hora, Hora horaFin):Call(numD,importe,fecha,hora,horaFin){
	this->roaming=roaming;
}

double CallI::calcular() const {
	return this->Call::calcular() + this->roaming;
}

std::ostream & operator <<(std::ostream & os, const CallI & cI){
	//return os << static_cast<Evento>(cI) << " "<<c.horaFin;
	//Al ser const, los metodos a los que llama tambien deben serlo
	return os <<cI.fecha<< " "<<cI.horaIn<<" "<<cI.horaFin<<" "<<cI.numDestino<<" "<<cI.importe<<" por sg., "<< cI.roaming<< " " << cI.calcular() << " eur.";
}

void CallI::imprimir() const {
	std::cout << *this << std::endl;
}

CallI::~CallI() {
	// TODO Auto-generated destructor stub
}

