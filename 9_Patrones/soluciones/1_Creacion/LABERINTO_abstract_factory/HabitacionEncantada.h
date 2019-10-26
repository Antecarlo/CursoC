/*
 * HabitacionEncantada.h
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#ifndef HABITACIONENCANTADA_H_
#define HABITACIONENCANTADA_H_

#include "Habitacion.h"
#include "LugarDeMapa.h"

class HabitacionEncantada : public Habitacion {

public:
	HabitacionEncantada(int numHabitacion);
	virtual LugarDeMapa *obtenerLado(Direccion) const;
	virtual void establecerLado(Direccion, LugarDeMapa *);
	virtual void entrar();
	virtual ~HabitacionEncantada();
};

#endif /* HABITACIONENCANTADA_H_ */
