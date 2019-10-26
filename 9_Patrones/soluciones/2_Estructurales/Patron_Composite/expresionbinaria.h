#ifndef EXPRESIONBINARIA_H
#define EXPRESIONBINARIA_H

#include "expresion.h"

#include <string>
using namespace std;

class ExpresionBinaria : public Expresion
{
	public:
		ExpresionBinaria(Expresion *expr1, Expresion *expr2);
		inline Expresion *getExpr1(){ return this->expr1; }
		inline Expresion *getExpr2(){ return this->expr2; }
		virtual string toString()=0;
		~ExpresionBinaria();
		
		
	protected:
		Expresion *expr1;
		Expresion *expr2;
};

#endif
