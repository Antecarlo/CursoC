/*
 * FabricaLaberintosEncantados.cpp
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */


#include "FabricaLaberintosEncantados.h"
#include "HabitacionEncantada.h"
#include "PuertaConHechizo.h"

FabricaLaberintosEncantados::FabricaLaberintosEncantados() : FabricaLaberintos(){}

Habitacion *FabricaLaberintosEncantados::hacerHabitacion(int n) const {
	return new HabitacionEncantada(n);
}
Puerta *FabricaLaberintosEncantados::hacerPuerta(Habitacion *h1, Habitacion *h2) const {
	return new PuertaConHechizo(h1, h2);
}

FabricaLaberintosEncantados::~FabricaLaberintosEncantados(){}
