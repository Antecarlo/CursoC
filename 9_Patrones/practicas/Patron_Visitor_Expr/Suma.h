#ifndef SUMA_H
#define SUMA_H

#include "OpBinaria.h"
#include "expresion.h"

class Suma : public OpBinaria
{
	public:
		Suma(Expresion *, Expresion *);
	
		~Suma();
	protected:
};

#endif
