/*
 * Juego.cpp
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#include "Juego.h"
#include "Laberinto.h"
#include "Puerta.h"
#include "Pared.h"
#include "Habitacion.h"
#include "FabricaLaberintos.h"

Juego::Juego(){}

Laberinto *Juego::crearLaberinto(FabricaLaberintos &fabrica){

	Laberinto *l = fabrica.hacerLaberinto();
	Habitacion *h1 = fabrica.hacerHabitacion(1);
	Habitacion *h2 = fabrica.hacerHabitacion(2);

	Puerta *p = fabrica.hacerPuerta(h1, h2);

	h1->establecerLado(Norte, fabrica.hacerPared());
	h1->establecerLado(Este, p);
	h1->establecerLado(Sur, fabrica.hacerPared());
	h1->establecerLado(Oeste, fabrica.hacerPared());

	h2->establecerLado(Norte, fabrica.hacerPared());
	h2->establecerLado(Oeste, p);
	h2->establecerLado(Sur, fabrica.hacerPared());
	h2->establecerLado(Este, fabrica.hacerPared());


	l->insertarHabitacion(h1);
	l->insertarHabitacion(h2);

	return l;
}

Juego::~Juego(){}
