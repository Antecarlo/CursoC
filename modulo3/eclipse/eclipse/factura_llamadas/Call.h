/*
 * Call.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef CALL_H_
#define CALL_H_

#include "Evento.h"
#include "Hora.h"
#include "Fecha.h"


class Call: public Evento {

	Hora horaFin;

public:
	Call();
	Call(long numD, double importe, Fecha fecha, Hora hora, Hora horaFin);
	double calcular();
	virtual ~Call();
};

#endif /* CALL_H_ */
