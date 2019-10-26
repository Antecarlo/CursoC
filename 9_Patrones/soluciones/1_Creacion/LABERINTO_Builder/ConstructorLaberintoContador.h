/*
 * ConstructorLaberintoContador.h
 *
 *  Created on: 10/07/2009
 *      Author: Administrador
 */

#ifndef CONSTRUCTORLABERINTOCONTADOR_H_
#define CONSTRUCTORLABERINTOCONTADOR_H_

#include "ConstructorLaberinto.h"

class ConstructorLaberintoContador : public ConstructorLaberinto {

private:
	int _puertas, _habitaciones;

public:
	ConstructorLaberintoContador();

	virtual void construirLaberinto();
	virtual void construirHabitacion(int);
	virtual void construirPuerta(int, int);

	void obtenerConteo(int &, int &) const;

	virtual ~ConstructorLaberintoContador();

};
#endif /* CONSTRUCTORLABERINTOCONTADOR_H_ */
