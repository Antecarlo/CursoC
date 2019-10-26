/*
 * Buscaminas.cpp
 *
 *  Created on: 3 oct. 2019
 *      Author: antonio
 */

#include "Buscaminas.h"
#include <cstdio>

Buscaminas::Buscaminas() {
	// TODO Auto-generated constructor stub

}

Buscaminas::Buscaminas(int n, int numBombas,std::string nombre) {
	this->tablero=Tablero(n, numBombas);
	this->jugador=nombre;
}

void Buscaminas::jugar() {
	bool continuar=false;
	Coordenada coor;

	do{
		system("clear");
		this->tablero.vistaJuego();
		std::cout << std::endl;
		//this->tablero.vistaTraza();

		std::cout << "Introduce coordenada: ";
		coor = jugador.getCoordenada();

		continuar = tablero.abrirCasilla(coor);

		if(continuar){
			tablero.abrirBombas();
			std::cout << "GAME OVER" << std::endl;
		}

	}while(!continuar);
}

Buscaminas::~Buscaminas() {
	// TODO Auto-generated destructor stub
}

