/*
 * PuertaConHechizo.h
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#ifndef PUERTACONHECHIZO_H_
#define PUERTACONHECHIZO_H_

#include "Puerta.h"
#include "Habitacion.h"

class PuertaConHechizo : public Puerta {

public:
	PuertaConHechizo(Habitacion * = 0, Habitacion * = 0);
	virtual void entrar();
	virtual Habitacion *otroLadoDe(Habitacion *);
	virtual ~PuertaConHechizo();
};

#endif /* PUERTACONHECHIZO_H_ */
