#ifndef EXPRESIONSUMA_H
#define EXPRESIONSUMA_H

#include "expresion.h"
#include "expresionbinaria.h"

class ExpresionSuma : public ExpresionBinaria
{
	public:
		ExpresionSuma(Expresion *, Expresion *);
		int getValue();
		string toString();
		~ExpresionSuma();
	protected:
};

#endif
