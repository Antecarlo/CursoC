#include "Circulo.h"

Figura * Circulo::clone() {
    return new Circulo(*this);
}

void Circulo::draw() {
	cout << "Circulo: r: " << radio
	     << " color: " << color << endl;
}

Circulo::Circulo(int r, string c):Figura(c) {
	this->radio = r;
}

Circulo::~Circulo()
{
}
