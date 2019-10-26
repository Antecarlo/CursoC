/*
 * Sms.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef SMS_H_
#define SMS_H_

#include "Evento.h"
#include "Hora.h"
#include "Fecha.h"


class Sms: public Evento {

public:
	Sms();
	Sms(long numD, double importe, Fecha fecha, Hora hora);
	double calcular(){return importe;}
	virtual ~Sms();
};


#endif /* SMS_H_ */
