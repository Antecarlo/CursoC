/*
 * Juego.cpp
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#include "Juego.h"

Juego::Juego(){}

Laberinto *Juego::crearLaberinto(ConstructorLaberinto &constructor){
	constructor.construirLaberinto();
	constructor.construirHabitacion(1);
	constructor.construirHabitacion(2);
	constructor.construirPuerta(1,2);
	return constructor.obtenerLaberinto();
}

Juego::~Juego(){}
