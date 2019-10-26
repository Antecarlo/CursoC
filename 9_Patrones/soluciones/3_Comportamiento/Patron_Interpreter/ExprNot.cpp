#include "ExprNot.h"

ExprNot::ExprNot(ExprBooleana *op)
{
	this->operando = op;
}



bool ExprNot::evaluar()
{
	return !operando->evaluar();
}

ExprBooleana *ExprNot::sustituir(string variable, ExprBooleana *expr)
{
	return new ExprNot(operando->sustituir(variable, expr));
}

ExprBooleana *ExprNot::copiar()
{
	return new ExprNot(operando->copiar());
}

string ExprNot::toString()
{
	return " NOT (" + operando->toString() + " )";
}

ExprNot::~ExprNot()
{
}
