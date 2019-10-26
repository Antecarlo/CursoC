/*
 * ConstructorLaberintoEstandar.h
 *
 *  Created on: 10/07/2009
 *      Author: Administrador
 */

#ifndef CONSTRUCTORLABERINTOESTANDAR_H_
#define CONSTRUCTORLABERINTOESTANDAR_H_

#include "ConstructorLaberinto.h"

class ConstructorLaberintoEstandar : public ConstructorLaberinto {

private:
	Laberinto *laberintoActual;

public:
	ConstructorLaberintoEstandar();

	virtual void construirLaberinto();
	virtual void construirHabitacion(int habitacion);
	virtual void construirPuerta(int h1, int h2);

	virtual Laberinto *obtenerLaberinto();
	virtual ~ConstructorLaberintoEstandar();

};
#endif /* CONSTRUCTORLABERINTOESTANDAR_H_ */
