/*
 * FabricaLaberintos.h
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#ifndef FABRICALABERINTOS_H_
#define FABRICALABERINTOS_H_

#include "Laberinto.h"
#include "Pared.h"
#include "Puerta.h"
#include "Habitacion.h"

class FabricaLaberintos {

public:
	FabricaLaberintos();

	virtual Laberinto *hacerLaberinto() const;
	virtual Pared *hacerPared() const;
	virtual Habitacion *hacerHabitacion(int) const;
	virtual Puerta *hacerPuerta(Habitacion *, Habitacion *) const;

	virtual ~FabricaLaberintos();

};
#endif /* FABRICALABERINTOS_H_ */
