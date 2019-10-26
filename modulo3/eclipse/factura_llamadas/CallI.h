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

	friend std::ostream & operator <<(std::ostream & os, const CallI & cI);
	//Funcion externa que no podria acceder a la parte protegida de las clases de arriba. Por ello se coloca el prefijo friend
	//si no, no podria acceder a los atributos que vienen heredados de Evento (son protegidos y solo las clases hijas (todas) pueden acceder)

protected:
	float roaming;

public:
	CallI();
	CallI(long numD,double roaming, double importe, Fecha fecha, Hora hora, Hora horaFin);

	double calcular() const;
	void imprimir() const;

	virtual ~CallI();
};


#endif /* CALLI_H_ */
