#ifndef EXPRESIONNUMERICA_H
#define EXPRESIONNUMERICA_H

#include "expresion.h"

#include <string>
using namespace std;

class ExpresionNumerica : public Expresion
{
	int numero;
	
	public:
		ExpresionNumerica(int);
		inline int getValue(){ return this->numero; }
		string toString();
		~ExpresionNumerica();
		
	protected:
};

#endif
