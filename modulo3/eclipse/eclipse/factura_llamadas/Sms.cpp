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

Sms::~Sms() {
	// TODO Auto-generated destructor stub
}