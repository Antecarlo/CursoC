#ifndef VARIABLE_H
#define VARIABLE_H

#include "Expresion.h"
#include "VisitanteExpresion.h"

#include <string>
using namespace std;

class Variable : public Expresion
{
	string _variable;
	
	public:
		Variable(string);
		void aceptar(VisitanteExpresion *);
		inline string getNombre(){ return _variable;}
		~Variable();
	protected:
};

#endif
