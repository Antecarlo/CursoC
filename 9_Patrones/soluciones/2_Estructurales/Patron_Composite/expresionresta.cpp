#include "expresionresta.h"

ExpresionResta::ExpresionResta(Expresion *exp1, Expresion *exp2):ExpresionBinaria(exp1, exp2)
{
}

int ExpresionResta::getValue()
{
	return this->expr1->getValue() - this->expr2->getValue();	
}

string ExpresionResta::toString()
{
	return "(" + this->expr1->toString() + " - " + this->expr2->toString() + ")";
}

ExpresionResta::~ExpresionResta()
{
}
