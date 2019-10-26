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

/*
	friend std::ostream & operator <<(std::ostream & os, const Sms & sms);
*/

public:
	Sms();
	Sms(long numD, double importe, Fecha fecha, Hora hora);

	double calcular() const {return importe;}
	void imprimir() const;

	virtual ~Sms();
};


#endif /* SMS_H_ */
