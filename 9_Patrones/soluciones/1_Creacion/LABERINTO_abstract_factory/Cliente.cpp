//============================================================================
// Name        : PC_Abstract_Factory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Juego.h"
#include "Laberinto.h"
#include "FabricaLaberintos.h"
#include "FabricaLaberintosConBombas.h"
#include "FabricaLaberintosEncantados.h"

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

	if (argc < 2){
		cout << "Tiene que indicar el tipo de laberinto que desea [NORMAL, ENCANTADO, CON_BOMBAS]" << endl;
		exit(1);
	}

	// Definimos el objeto Laberinto:
	Laberinto *laberinto = NULL;

	// Creamos el objeto Juego:
	Juego *juego = new Juego();

	if (!strcmp(argv[1], "NORMAL")){
		FabricaLaberintos fabrica;
		laberinto = juego->crearLaberinto(fabrica);

	} else if (!strcmp(argv[1], "ENCANTADO")){
		FabricaLaberintosEncantados fabrica;
		laberinto = juego->crearLaberinto(fabrica);

	} else if (!strcmp(argv[1], "CON_BOMBAS")){
		FabricaLaberintosConBombas fabrica;
		laberinto = juego->crearLaberinto(fabrica);

	} else {
		cout << "El tipo de laberinto no es correcto, seleccione entre estos valores: [NORMAL, ENCANTADO, CON_BOMBAS]" << endl;
		exit(1);
	}

	// Comprobación del Laberinto que hemos creado:
	cout << "Laberinto creado con " << laberinto->getNumHabitaciones() << " habitaciones ... " << endl;

	return 0;
}
