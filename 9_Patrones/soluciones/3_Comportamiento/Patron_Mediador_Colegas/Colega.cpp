#include "Colega.h"


Colega::Colega() {}

Colega::Colega(IMediador *mediador)
{
	this->mediador = mediador;
}

IMediador * Colega::getMediador() {
    return mediador;
}


void Colega::setMediador(IMediador * mediador) {
	this->mediador = mediador;
}

void Colega::comunicar(string mensaje) {
    this->getMediador()->enviar(mensaje, this);
}


Colega::~Colega() {
	//delete this->mediador;
}
