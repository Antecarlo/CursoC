/**
 * Project Untitled
 */


#include "Escena.h"

Escena::Escena() {

}

void Escena::addFigura(Figura * figura) {
	this->figuras.push_back(figura);
}

void Escena::draw() {
	for (int i = 0 ; i < this->figuras.size() ; i++)
		this->figuras[i]->draw();
}

Escena::~Escena() {
	for (int i = 0 ; i < this->figuras.size() ; i++)
		delete this->figuras[i];
}
