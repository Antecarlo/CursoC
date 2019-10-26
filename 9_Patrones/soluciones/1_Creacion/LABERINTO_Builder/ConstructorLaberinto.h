/*
 * ConstructorLaberinto.h
 *
 *  Created on: 10/07/2009
 *      Author: Administrador
 */

#ifndef CONSTRUCTORLABERINTO_H_
#define CONSTRUCTORLABERINTO_H_

#include "Laberinto.h"

class ConstructorLaberinto {

protected:
	ConstructorLaberinto(){};

public:
	virtual void construirLaberinto(){}
	virtual void construirHabitacion(int habitacion){}
	virtual void construirPuerta(int h1, int h2){}

	virtual Laberinto *obtenerLaberinto(){ return 0; }
};

#endif /* CONSTRUCTORLABERINTO_H_ */
