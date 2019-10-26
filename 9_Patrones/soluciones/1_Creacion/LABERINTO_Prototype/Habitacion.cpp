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

Habitacion::Habitacion(const Habitacion &otra){
	this->numeroHabitacion = otra.numeroHabitacion;

	for (int i=0 ; i < 4 ; i++)
		this->lados[i] = otra.lados[i];
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

Habitacion *Habitacion::clonar() const{
	return new Habitacion(*this);
}

void Habitacion::inicializar(int n){
	this->numeroHabitacion = n;
}

Habitacion::~Habitacion(){}
