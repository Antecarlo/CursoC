/*
 * HabitacionConBombas.h
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#ifndef HABITACIONCONBOMBAS_H_
#define HABITACIONCONBOMBAS_H_

#include "Habitacion.h"
#include "LugarDeMapa.h"

class HabitacionConBombas : public Habitacion {

public:
	HabitacionConBombas(int numHabitacion = 0);
	HabitacionConBombas(const HabitacionConBombas &);
	virtual LugarDeMapa *obtenerLado(Direccion) const;
	virtual void establecerLado(Direccion, LugarDeMapa *);
	virtual void entrar();
	virtual HabitacionConBombas *clonar();
	virtual ~HabitacionConBombas();
};

#endif /* HABITACIONCONBOMBAS_H_ */
