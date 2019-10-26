/*
 * Call.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "Call.h"

Call::Call(){
}

Call::Call(long numD, double importe, Fecha fecha, Hora hora, Hora horaFin): Evento(numD,importe,fecha,hora){
	// TODO Auto-generated constructor stub
	this->horaFin=horaFin;
}


double Call::calcular() const {
	long sg= horaIn.diferenciaSg(horaFin);
	return importe * sg;
}

std::ostream & operator <<(std::ostream & os, const Call & c){
	//return os << static_cast<Evento>(c) << " "<<c.horaFin; No funcionaria, casting a clase abstracta
	//Al ser const, los metodos a los que llama tambien deben serlo
	return os <<c.fecha<< " "<<c.horaIn<<" "<<c.horaFin<<" "<<c.numDestino<<" "<<c.importe<<" por sg. "<< c.calcular() << " eur.";
}

//Añadir operador << con casting

Call::~Call() {
	// TODO Auto-generated destructor stub
}

void Call::imprimir() const {
	std::cout << * this << std::endl;
}