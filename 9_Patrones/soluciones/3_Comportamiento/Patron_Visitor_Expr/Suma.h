#ifndef SUMA_H
#define SUMA_H

#include "OpBinaria.h"
#include "Expresion.h"
#include "VisitanteExpresion.h"


class Suma : public OpBinaria
{
	public:
		Suma(Expresion *, Expresion *);
		void aceptar(VisitanteExpresion *);
		~Suma();
	protected:
};

#endif
