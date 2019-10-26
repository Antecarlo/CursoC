//============================================================================
// Name        : PC_Abstract_Factory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Juego.h"
#include "Laberinto.h"
#include "ConstructorLaberintoEstandar.h"
#include "ConstructorLaberintoContador.h"

#include <iostream>
using namespace std;

int main() {
	Juego juego;
	ConstructorLaberintoEstandar constructor1;

	juego.crearLaberinto(constructor1);
	Laberinto *laberinto = constructor1.obtenerLaberinto();

	cout << "LABERINTO: creado con " << laberinto->getNumHabitaciones() << " habitaciones ... " << endl;

	// Utilizando el otro constructor:
	int puertas = 0, habitaciones = 0;
	Juego juego2;
	ConstructorLaberintoContador constructor2;
	juego2.crearLaberinto(constructor2);
	constructor2.obtenerConteo(habitaciones, puertas);

	cout << "LABERINTO CONTADOR CON: " << puertas << " puertas y " << habitaciones << " habitaciones ..." << endl;
	return 0;
}
