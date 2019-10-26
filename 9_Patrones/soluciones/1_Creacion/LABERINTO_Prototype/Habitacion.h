/*
 * Habitacion.h
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#ifndef HABITACION_H_
#define HABITACION_H_

#include <iostream>
using namespace std;
#include "LugarDeMapa.h"

enum Direccion {Norte, Sur, Este, Oeste};

class Habitacion: public LugarDeMapa {

private:
	LugarDeMapa *lados[4];

protected:
	int numeroHabitacion;

public:
	Habitacion(int numHabitacion = 0);
	Habitacion(const Habitacion &);
	virtual LugarDeMapa *obtenerLado(Direccion) const;
	virtual void establecerLado(Direccion, LugarDeMapa *);
	virtual void entrar();

	virtual Habitacion *clonar() const;
	virtual void inicializar(int);
	virtual ~Habitacion();

};
#endif /* HABITACION_H_ */
