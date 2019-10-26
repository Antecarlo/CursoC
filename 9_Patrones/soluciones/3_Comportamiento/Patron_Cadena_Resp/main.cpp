#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "manejadortipo1.h"
#include "manejadortipo2.h"

int main(int argc, char** argv) {
	Manejador *m1 = new ManejadorTipo1();
	Manejador *m2 = new ManejadorTipo2();
	
	m1->setManejador(m2);
	m1->manejarPeticion(Peticion(1,"+"));
	m1->manejarPeticion(Peticion(0,"+"));
	m1->manejarPeticion(Peticion(-1,"-"));
}
