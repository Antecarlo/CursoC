#include "ExprAnd.h"


ExprAnd::ExprAnd(ExprBooleana *e1, ExprBooleana *e2)
{
	this->expr1 = e1;
	this->expr2 = e2;
	
}


bool ExprAnd::evaluar()
{
	expr1->evaluar() && expr2->evaluar();
}

ExprBooleana *ExprAnd::sustituir(string variable, ExprBooleana *e)
{
	return new ExprAnd(expr1->sustituir(variable, e), expr2->sustituir(variable, e));
}

ExprBooleana *ExprAnd::copiar()
{
	return new ExprAnd(expr1->copiar(), expr2->copiar());
}

string ExprAnd::toString()
{
	return "( " + expr1->toString() + " AND " + expr2->toString() + " )";
}
	
ExprAnd::~ExprAnd()
{
}
