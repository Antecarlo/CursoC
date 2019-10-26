#ifndef EXPRAND_H
#define EXPRAND_H

#include <string>
using namespace std;

#include "ExprBooleana.h"


class ExprAnd : public ExprBooleana
{
	ExprBooleana *expr1;
	ExprBooleana *expr2;
	
	public:
		ExprAnd(ExprBooleana *, ExprBooleana *);
		bool evaluar();
		ExprBooleana *sustituir(string variable, ExprBooleana *);
		ExprBooleana *copiar();
		string toString();
		~ExprAnd();
	protected:
};

#endif
