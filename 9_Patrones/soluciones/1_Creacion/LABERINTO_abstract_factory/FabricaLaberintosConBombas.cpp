/*
 * FabricaLaberintosConBombas.cpp
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#include "FabricaLaberintosConBombas.h"
#include "HabitacionConBombas.h"
#include "ParedExplosionada.h"

FabricaLaberintosConBombas::FabricaLaberintosConBombas() : FabricaLaberintos(){}

Habitacion *FabricaLaberintosConBombas::hacerHabitacion(int n) const {
	return new HabitacionConBombas(n);
}

Pared *FabricaLaberintosConBombas::hacerPared() const {
	return new ParedExplosionada();
}

FabricaLaberintosConBombas::~FabricaLaberintosConBombas(){}
