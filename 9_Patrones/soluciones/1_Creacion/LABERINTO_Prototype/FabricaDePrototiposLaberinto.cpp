/*
 * FabricaDePrototiposLaberinto.cpp
 *
 *  Created on: 10/07/2009
 *      Author: Administrador
 */


#include "FabricaDePrototiposLaberinto.h"

FabricaDePrototiposLaberinto::FabricaDePrototiposLaberinto(Laberinto *laberinto, Pared *pared, Puerta *puerta, Habitacion *habitacion){
	// Se iniciliza con unos parámetros por defecto:
	this->prototipoHabitacion = habitacion;
	this->prototipoLaberinto = laberinto;
	this->prototipoPared = pared;
	this->prototipoPuerta = puerta;
}

Laberinto *FabricaDePrototiposLaberinto::hacerLaberinto() const {
	return this->prototipoLaberinto->clonar();
}

Pared *FabricaDePrototiposLaberinto::hacerPared() const {
	return this->prototipoPared->clonar();
}

Puerta *FabricaDePrototiposLaberinto::hacerPuerta(Habitacion *h1, Habitacion *h2) const {
	Puerta *puerta = this->prototipoPuerta->clonar();
	puerta->inicializar(h1, h2);
	return puerta;
}

Habitacion *FabricaDePrototiposLaberinto::hacerHabitacion(int n) const {
	Habitacion *habitacion = this->prototipoHabitacion->clonar();
	habitacion->inicializar(n);
	return habitacion;
}
