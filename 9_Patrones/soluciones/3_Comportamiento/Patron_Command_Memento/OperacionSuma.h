#ifndef OPERACIONSUMA_H
#define OPERACIONSUMA_H

#include "operacion.h"

class OperacionSuma : public Operacion
{
	public:
		OperacionSuma(long=0);
		long operar(long);
		string toString();
		~OperacionSuma();
	protected:
};

#endif
