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

Juego::Juego(){}

Laberinto *Juego::crearLaberinto(){

	Laberinto *l = new Laberinto();
	Habitacion *h1 = new Habitacion(1);
	Habitacion *h2 = new Habitacion(2);

	Puerta *p = new Puerta(h1, h2);

	h1->establecerLado(Norte, new Pared());
	h1->establecerLado(Este, p);
	h1->establecerLado(Sur, new Pared());
	h1->establecerLado(Oeste, new Pared());

	h2->establecerLado(Norte, new Pared());
	h2->establecerLado(Oeste, p);
	h2->establecerLado(Sur, new Pared());
	h2->establecerLado(Este, new Pared());


	l->insertarHabitacion(h1);
	l->insertarHabitacion(h2);

	return l;
}

Juego::~Juego(){}
