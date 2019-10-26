#include "RelojAnalogico.h"

RelojAnalogico::RelojAnalogico(Reloj *reloj)
{
	this->reloj = reloj;
	this->reloj->add(this);
}

void RelojAnalogico::actualizar(Sujeto *sujeto)
{
	cout << "Reloj Analogico --> " << sujeto->toString() << endl;
}

RelojAnalogico::~RelojAnalogico()
{
}
