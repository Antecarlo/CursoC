#ifndef ICALCULADORA_H
#define ICALCULADORA_H

#include "operacion.h"

class ICalculadora
{
	public:
		virtual void operar(Operacion *)=0;
		virtual void reset()=0;
		virtual void undo()=0;
		virtual void verHistorialDeComandos()=0;
	protected:
};

#endif
