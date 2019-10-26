//============================================================================
// Name        : PC_Abstract_Factory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Juego.h"
#include "Laberinto.h"
#include "ParedExplosionada.h"
#include "HabitacionConBombas.h"
#include "FabricaDePrototiposLaberinto.h"

#include <iostream>
using namespace std;

int main() {

	// Primer juego con un laberinto Simple:
	Laberinto *laberinto;
	Juego *juego = new Juego();
	FabricaDePrototiposLaberinto fabricaLaberintosSimples(new Laberinto(), new Pared(), new Puerta(), new Habitacion());
	laberinto = juego->crearLaberinto(fabricaLaberintosSimples);
	cout << "LABERINTO: creado con " << laberinto->getNumHabitaciones() << " habitaciones ... " << endl;

	// Segundo juego con un laberinto con Bombas:
	Laberinto *laberinto2;
	Juego *juego2 = new Juego();
	FabricaDePrototiposLaberinto fabricaLaberintosConBombas(new Laberinto(), new ParedExplosionada(), new Puerta(), new HabitacionConBombas());
	laberinto2 = juego2->crearLaberinto(fabricaLaberintosConBombas);
	cout << "LABERINTO CON BOMBAS: creado con " << laberinto2->getNumHabitaciones() << " habitaciones ... " << endl;

	return 0;
}
