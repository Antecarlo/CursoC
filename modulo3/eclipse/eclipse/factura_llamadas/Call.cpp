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

Call::~Call() {
	// TODO Auto-generated destructor stub
}

double Call::calcular() {
	long sg= horaIn.diferenciaSg(horaFin);
	return importe * sg;
}
