#ifndef OPERACIONRESTA_H
#define OPERACIONRESTA_H

#include "operacion.h"

class OperacionResta : public Operacion
{
	public:
		OperacionResta(long=0);
		long operar(long);
		string toString();
		~OperacionResta();
	protected:
};

#endif
