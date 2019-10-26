/*
 * FabricaLaberinto.cpp
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */


#include "FabricaLaberintos.h"

FabricaLaberintos::FabricaLaberintos(){}

Laberinto *FabricaLaberintos::hacerLaberinto() const {
	return (new Laberinto());
}

Pared *FabricaLaberintos::hacerPared() const {
	return (new Pared());
}

Habitacion *FabricaLaberintos::hacerHabitacion(int n) const {
	return (new Habitacion(n));
}

Puerta *FabricaLaberintos::hacerPuerta(Habitacion *h1, Habitacion *h2) const {
	return (new Puerta(h1, h2));
}

FabricaLaberintos::~FabricaLaberintos(){}
