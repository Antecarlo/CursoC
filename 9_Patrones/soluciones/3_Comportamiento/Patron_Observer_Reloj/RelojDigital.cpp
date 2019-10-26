#include "RelojDigital.h"

RelojDigital::RelojDigital(Reloj *reloj)
{
	this->reloj = reloj;
	this->reloj->add(this);
}

void RelojDigital::actualizar(Sujeto *sujeto)
{
	cout << "Reloj digital --> " << sujeto->toString() << endl;
}

RelojDigital::~RelojDigital()
{
}
