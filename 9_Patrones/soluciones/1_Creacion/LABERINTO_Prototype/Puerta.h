/*
 * Puerta.h
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#ifndef PUERTA_H_
#define PUERTA_H_

#include <iostream>
using namespace std;

#include "LugarDeMapa.h"
#include "Habitacion.h"

class Puerta : public LugarDeMapa {

protected:
	Habitacion *habitacion1;
	Habitacion *habitacion2;
	bool estaAbierta;

public:
	Puerta(Habitacion * = 0, Habitacion * = 0);
	Puerta(const Puerta &);
	virtual void entrar();
	virtual Habitacion *otroLadoDe(Habitacion *);
	virtual Puerta *clonar();
	virtual void inicializar(Habitacion *h1, Habitacion *h2);
	virtual ~Puerta();

};
#endif /* PUERTA_H_ */
