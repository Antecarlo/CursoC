/*
 * Evento.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef EVENTO_H_
#define EVENTO_H_
#include "Fecha.h"
#include "Hora.h"
#include <iostream>


class Evento {

protected:

	long numDestino;
	double importe;
	Fecha fecha;
	Hora horaIn;

public:

	//Constructores
	Evento();
	Evento(long numD,double importe, Fecha fecha, Hora inicio);

	friend	std::ostream & operator <<(std::ostream & os, const Evento & s);
	virtual double calcular()=0;

	//Destructor
	virtual ~Evento();
};


#endif /* EVENTO_H_ */
