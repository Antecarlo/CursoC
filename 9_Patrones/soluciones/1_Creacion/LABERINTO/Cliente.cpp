//============================================================================
// Name        : PC_Abstract_Factory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Juego.h"
#include "Laberinto.h"

#include <iostream>
using namespace std;

int main() {
	Juego *juego = new Juego();
	Laberinto *laberinto = juego->crearLaberinto();
	cout << "PRUEBA LABERINTO: creado con " << laberinto->getNumHabitaciones() << " habitaciones ... " << endl;

	return 0;
}
