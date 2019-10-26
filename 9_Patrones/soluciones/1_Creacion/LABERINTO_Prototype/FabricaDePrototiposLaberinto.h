/*
 * FabricaDePrototiposLaberinto.h
 *
 *  Created on: 10/07/2009
 *      Author: Administrador
 */

#ifndef FABRICADEPROTOTIPOSLABERINTO_H_
#define FABRICADEPROTOTIPOSLABERINTO_H_

#include "FabricaLaberintos.h"
#include "Laberinto.h"
#include "Pared.h"
#include "Puerta.h"
#include "Habitacion.h"

class FabricaDePrototiposLaberinto : public FabricaLaberintos {

private:
	Laberinto *prototipoLaberinto;
	Puerta *prototipoPuerta;
	Pared *prototipoPared;
	Habitacion *prototipoHabitacion;

public:
	FabricaDePrototiposLaberinto(Laberinto *, Pared *, Puerta *, Habitacion *);

	virtual Laberinto *hacerLaberinto() const;
	virtual Pared *hacerPared() const;
	virtual Puerta *hacerPuerta(Habitacion *, Habitacion *) const;
	virtual Habitacion *hacerHabitacion(int) const;

};
#endif /* FABRICADEPROTOTIPOSLABERINTO_H_ */
