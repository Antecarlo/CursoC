/*
 * HabitacionEncantada.cpp
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#include "HabitacionEncantada.h"

HabitacionEncantada::HabitacionEncantada(int numHabitacion) : Habitacion(numHabitacion){}

LugarDeMapa *HabitacionEncantada::obtenerLado(Direccion d) const {
	return Habitacion::obtenerLado(d);
}

void HabitacionEncantada::establecerLado(Direccion d, LugarDeMapa *lugar){
	Habitacion::establecerLado(d, lugar);
}

void HabitacionEncantada::entrar(){
	cout << "Entramos en la habitación ENCANTADA " << this->numeroHabitacion << endl;
}

HabitacionEncantada::~HabitacionEncantada(){}
