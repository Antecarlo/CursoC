#ifndef MULT_H
#define MULT_H

#include "Expresion.h"
#include "OpBinaria.h"
#include "VisitanteExpresion.h"

class Mult : public OpBinaria
{
	
	public:
		Mult(Expresion *, Expresion *);
		void aceptar(VisitanteExpresion *);
		~Mult();
	protected:
};

#endif
