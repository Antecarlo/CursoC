/*
 * Laberinto.cpp
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#include "Laberinto.h"

Laberinto::Laberinto(){
	this->ocupacion = 0;

	for (int i = 0 ; i < 5 ; i++)
		this->habitaciones[i] = NULL;
}

void Laberinto::insertarHabitacion(Habitacion *h){

	if (this->ocupacion < 5){
		this->habitaciones[this->ocupacion] = h;
		this->ocupacion++;
	}
}

Habitacion *Laberinto::getHabitacion(int i) const {
	return this->habitaciones[i];
}

int Laberinto::getNumHabitaciones() const {
	return this->ocupacion;
}

Laberinto::~Laberinto(){}
