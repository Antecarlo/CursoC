#include "expresionbinaria.h"

ExpresionBinaria::ExpresionBinaria(Expresion *expr1, Expresion *expr2)
{
	this->expr1 = expr1;
	this->expr2 = expr2;
}


ExpresionBinaria::~ExpresionBinaria()
{
	delete this->expr1;
	delete this->expr2;
}
