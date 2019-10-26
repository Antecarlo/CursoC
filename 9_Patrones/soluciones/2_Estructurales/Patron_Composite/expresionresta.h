#ifndef EXPRESIONRESTA_H
#define EXPRESIONRESTA_H

#include "expresionbinaria.h"

class ExpresionResta : public ExpresionBinaria
{
	public:
		ExpresionResta(Expresion *, Expresion *);
		int getValue();
		string toString();
		~ExpresionResta();
	protected:
};

#endif
