/*
 * ConstructorLaberintoEstandar.cpp
 *
 *  Created on: 10/07/2009
 *      Author: Administrador
 */

#include "ConstructorLaberinto.h"
#include "ConstructorLaberintoEstandar.h"
#include "Pared.h"
#include "Habitacion.h"
#include "Puerta.h"

ConstructorLaberintoEstandar::ConstructorLaberintoEstandar() {
	this->laberintoActual = 0;
}

void ConstructorLaberintoEstandar::construirLaberinto(){
	this->laberintoActual = new Laberinto();
}

void ConstructorLaberintoEstandar::construirHabitacion(int habitacion){

	// Comprobar que no existe la habitación:
	if (! this->laberintoActual->getHabitacion(habitacion)){

		// Crea la habitación y establece los lados:
		Habitacion *h = new Habitacion(habitacion);

		this->laberintoActual->insertarHabitacion(h);

		h->establecerLado(Norte, new Pared());
		h->establecerLado(Sur, new Pared());
		h->establecerLado(Este, new Pared());
		h->establecerLado(Oeste, new Pared());
	}
}

void ConstructorLaberintoEstandar::construirPuerta(int h_1, int h_2){

	// Capturar las dos habitaciones para montar la puerta:
	Habitacion *h1 = this->laberintoActual->getHabitacion(h_1);
	Habitacion *h2 = this->laberintoActual->getHabitacion(h_2);

	if (!h1 && !h2){
		Puerta *p = new Puerta(h1, h2);

		h1->establecerLado(Norte, p);
		h2->establecerLado(Sur, p);
	}
}

Laberinto *ConstructorLaberintoEstandar::obtenerLaberinto(){
	return this->laberintoActual;
}

ConstructorLaberintoEstandar::~ConstructorLaberintoEstandar(){}
