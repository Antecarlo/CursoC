/*
 * Puerta.cpp
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#include "Puerta.h"
#include "Habitacion.h"

Puerta::Puerta(Habitacion *h1, Habitacion *h2){
	this->habitacion1 = h1;
	this->habitacion2 = h2;
	this->estaAbierta = true;
}

void Puerta::entrar(){
	cout << "Atravesamos la puerta" << endl;
}

Habitacion *Puerta::otroLadoDe(Habitacion *h){
	return (this->habitacion1 == h) ? this->habitacion2 : this->habitacion2;
}

Puerta::~Puerta(){}
