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

Buscaminas::Buscaminas(int numBombas,std::string nombre,int n) {
	this->tablero=Tablero(n, numBombas);
	this->jugador=nombre;
}

void Buscaminas::jugar() {
	bool continuar=false;
	Coordenada coor;

	do{
		bool flag=true;
		system("clear");
		this->tablero.vistaJuego();
		std::cout << std::endl;
		//this->tablero.vistaTraza();

		do{
			coor = jugador.getCoordenada();
			try{
				continuar = tablero.abrirCasilla(coor);
				flag=true;
			}catch(std::out_of_range & e){
				this->tablero.vistaJuego();
				std::cerr << e.what() << std::endl;
				flag=false;
			}catch(std::invalid_argument & e){
				this->tablero.vistaJuego();
				std::cerr << e.what() << std::endl;
				flag=false;
			}
		}while(flag!=true);

		if(continuar){
			tablero.abrirBombas();
			std::cout << "GAME OVER" << std::endl;
		}

	}while(!continuar);
}


Buscaminas::~Buscaminas() {
	// TODO Auto-generated destructor stub
}

