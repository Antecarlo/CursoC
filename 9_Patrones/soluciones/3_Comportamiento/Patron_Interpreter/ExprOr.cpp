#include "ExprOr.h"


ExprOr::ExprOr(ExprBooleana *e1, ExprBooleana *e2)
{
	this->expr1 = e1;
	this->expr2 = e2;
	
}


bool ExprOr::evaluar()
{
	return (expr1->evaluar() || expr2->evaluar() );
}

ExprBooleana *ExprOr::sustituir(string variable, ExprBooleana *e)
{
	return new ExprOr(expr1->sustituir(variable, e), expr2->sustituir(variable, e));
}

ExprBooleana *ExprOr::copiar()
{
	return new ExprOr(expr1->copiar(), expr2->copiar());
}

string ExprOr::toString()
{
	return "( " + expr1->toString() + " OR " + expr2->toString() + " )";
}
	
ExprOr::~ExprOr()
{
}
