/*
 * main.cpp
 *
 *  Created on: 2 oct. 2019
 *      Author: antonio
 */

#ifndef MAIN_CPP_
#define MAIN_CPP_

#include<iostream>
#include <vector>

#include "Coordenada.h"
#include "Tablero.h"
#include "Buscaminas.h"

void testClases(){
	/*
	std::vector<Coordenada> coordenadas = Coordenada::getCoordenadasAleatorias(8, 10);

	for (auto c: coordenadas)
		std::cout << c << std::endl;
	*/

	Tablero t(10,8);
	t.abrirCasilla(Coordenada(0,0));
	t.vistaJuego();
	std::cout << std::endl;
	t.vistaTraza();
}

void jugar(){
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$ BUSCAMINAS $$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << std::endl;
	std::cout << "Inserta nombre del jugador: " << std::endl;
	std::string nombre;
	std::cin >> nombre;
	std::cout << "Inserta n del tablero: " << std::endl;
	int n;
	std::cin >> n;
	std::cout << "Inserta numero de bombas: " << std::endl;
	int num;
	std::cin >> num;

	Buscaminas busca = Buscaminas(n,num,nombre);
	busca.jugar();
}

int main(){
	//testClases();
	jugar();
}


#endif /* MAIN_CPP_ */