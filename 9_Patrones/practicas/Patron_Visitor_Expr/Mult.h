#ifndef MULT_H
#define MULT_H

#include "expresion.h"
#include "OpBinaria.h"


class Mult : public OpBinaria
{
	
	public:
		Mult(Expresion *, Expresion *);
		
		~Mult();
	protected:
};

#endif
