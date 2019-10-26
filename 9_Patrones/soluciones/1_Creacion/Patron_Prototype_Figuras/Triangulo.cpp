/**
 * Project Untitled
 */


#include "Triangulo.h"

Figura * Triangulo::clone() {
    return new Triangulo(*this);
}

void Triangulo::draw() {
	cout << "Triangulo: b: " << base << " h: " 
	     << altura << " color: " << color << endl;
}

Triangulo::Triangulo(int b, int h, string c):
Figura(c) {
	this->base = b;
	this->altura = h;
}
