/*
 * CallI.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef CALLI_H_
#define CALLI_H_

#include "Call.h"


class CallI: public Call {

	float roaming;

public:
	CallI(long numD,double roaming, double importe, Fecha fecha, Hora hora, Hora horaFin);
	virtual ~CallI();
};


#endif /* CALLI_H_ */
