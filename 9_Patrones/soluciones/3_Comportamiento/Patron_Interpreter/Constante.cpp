#include "Constante.h"

Constante::Constante(bool valor)
{
	this->valor = valor;
}


bool Constante::evaluar()
{
	return valor;
}

ExprBooleana *Constante::sustituir(string variable, ExprBooleana *e)
{
	return new Constante(valor);
}

ExprBooleana *Constante::copiar()
{
	return new  Constante(valor);
}

string Constante::toString()
{
	return (valor ? " T " : " F ");
}

Constante::~Constante()
{
}
