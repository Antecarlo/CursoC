#ifndef CONSTANTE_H
#define CONSTANTE_H

#include "ExprBooleana.h"

#include <string>
using namespace std;

class Constante : public ExprBooleana
{
	bool valor;
	
	public:
		Constante(bool valor);
		bool evaluar();
		ExprBooleana *sustituir(string, ExprBooleana *);
		ExprBooleana *copiar();
		string toString();
		~Constante();
	protected:
};

#endif
