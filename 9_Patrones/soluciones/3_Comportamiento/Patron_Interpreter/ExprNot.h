#ifndef EXPRNOT_H
#define EXPRNOT_H

#include <string>
using namespace std;

#include "ExprBooleana.h"


class ExprNot : public ExprBooleana
{
	ExprBooleana *operando;
	
	public:
		ExprNot(ExprBooleana *op);
		bool evaluar();
		ExprBooleana *sustituir(string, ExprBooleana *);
		ExprBooleana *copiar();
		string toString();
		~ExprNot();
	protected:
};

#endif
