#include "expresionsuma.h"

ExpresionSuma::ExpresionSuma(Expresion *exp1, Expresion *exp2):ExpresionBinaria(exp1, exp2)
{
}

int ExpresionSuma::getValue()
{
	return this->expr1->getValue() + this->expr2->getValue();	
}

string ExpresionSuma::toString()
{
	return "(" + this->expr1->toString() + " + " + this->expr2->toString() + ")";
}

ExpresionSuma::~ExpresionSuma()
{
}
