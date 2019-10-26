#ifndef COMMANDOPERACION_H
#define COMMANDOPERACION_H

#include "Command.h"
#include "operacion.h"

class CommandOperacion : public Command
{
	Operacion *op;
	
	public:
		CommandOperacion(ICalculadora *, Operacion *);
		void execute();
		~CommandOperacion();
	protected:
};

#endif
