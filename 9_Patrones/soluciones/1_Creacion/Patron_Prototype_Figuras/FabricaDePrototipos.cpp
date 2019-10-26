#include "FabricaDePrototipos.h"

Figura * FabricaDePrototipos::getFigura(TIPOS_FIGURA tipo) {
    // Clonamos el prototipo:
	return this->prototipos[tipo]->clone();
}

FabricaDePrototipos::FabricaDePrototipos() {
	this->instanciarPrototipos();
}

void FabricaDePrototipos::instanciarPrototipos() {
	this->prototipos[CIRCULO] = new Circulo(1, "red");
	this->prototipos[TRIANGULO] = new Triangulo(2,3,"green");
	// Se instancia una clase de cada prototipo y se almacena
	// en el mapa (el catálogo)
}

FabricaDePrototipos::~FabricaDePrototipos() {
	// Liberar todos los prototipos:
	delete this->prototipos[CIRCULO];
	delete this->prototipos[TRIANGULO];
}


