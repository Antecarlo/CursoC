/*
 * Habitacion.cpp
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#include "Habitacion.h"

Habitacion::Habitacion(int numHabitacion){
	this->numeroHabitacion = numHabitacion;
}

LugarDeMapa *Habitacion::obtenerLado(Direccion d) const {
	return this->lados[d];
}

void Habitacion::establecerLado(Direccion d, LugarDeMapa *lugar){
	this->lados[d] = lugar;
}

void Habitacion::entrar(){
	cout << "Entramos en la habitación " << this->numeroHabitacion << endl;
}

Habitacion::~Habitacion(){}
