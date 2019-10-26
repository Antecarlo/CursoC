/*
 * PuertaConHechizo.cpp
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#include "PuertaConHechizo.h"
#include "Habitacion.h"

PuertaConHechizo::PuertaConHechizo(Habitacion *h1, Habitacion *h2) : Puerta(h1, h2){}

void PuertaConHechizo::entrar(){
	cout << "Atravesamos la puerta, ES UNA PUERTA HECHIZADA" << endl;
}

Habitacion *PuertaConHechizo::otroLadoDe(Habitacion *h){
	return (this->habitacion1 == h) ? this->habitacion2 : this->habitacion2;
}

PuertaConHechizo::~PuertaConHechizo(){}
