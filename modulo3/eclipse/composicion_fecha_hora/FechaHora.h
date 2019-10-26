/*
 * FechaHora.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef FECHAHORA_H_
#define FECHAHORA_H_

#include "Fecha.h"
#include "Hora.h"

class FechaHora {

	Fecha f;
	Hora h;

	friend std::ostream & operator<<(std::ostream & os, const FechaHora & fh);

public:
	FechaHora (Fecha fecha, Hora hora);
	FechaHora(int d=1, int M=1, int y=1970, int h=0, int m=0, int s=0);
	virtual ~FechaHora();
};


#endif /* FECHAHORA_H_ */
