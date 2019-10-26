/*
 * Sms.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "Sms.h"

Sms::Sms(){
}

Sms::Sms(long numD, double importe, Fecha fecha, Hora hora): Evento(numD,importe,fecha,hora){
}

/*
std::ostream & operator <<(std::ostream & os, const Sms & sms){
	return os <<sms.fecha<< " "<<sms.horaIn<<" "<<sms.numDestino<<" "<<sms.importe;
}
*/

void Sms::imprimir() const {
	std::cout << * this << std::endl;
}

Sms::~Sms() {
	// TODO Auto-generated destructor stub
}
