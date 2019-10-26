#ifndef EXPROR_H
#define EXPROR_H

#include <string>
using namespace std;

#include "ExprBooleana.h"

class ExprOr : public ExprBooleana
{
	ExprBooleana *expr1;
	ExprBooleana *expr2;
	
	public:
		ExprOr(ExprBooleana *, ExprBooleana *);
		bool evaluar();
		ExprBooleana *sustituir(string variable, ExprBooleana *);
		ExprBooleana *copiar();
		string toString();
		~ExprOr();
	protected:
};

#endif
