/*
 * Casilla.cpp
 *
 *  Created on: 3 oct. 2019
 *      Author: antonio
 */

#include "Casilla.h"

Casilla::Casilla(Coordenada coor, bool abierta, int contador): coor(coor),abierta(abierta), contador(contador) {
}

void Casilla::vistaJuego() {
	if(abierta){
		this->vistaTraza();
	}else{
		std::cout << " · ";
	}
}

Casilla Casilla::operator ++(){
	this->contador++;
	return * this;
}

void Casilla::vistaTraza() {

	if(contador==BOMBA)
			std::cout << " B ";
	else
			std::cout << " " << contador << " ";
}

Casilla::~Casilla() {
	// TODO Auto-generated destructor stub
}

bool Casilla::operator ==(const Casilla& c) {
	return this->isBomba() && c.isBomba();
}
