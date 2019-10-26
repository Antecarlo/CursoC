#ifndef COMMAND_H
#define COMMAND_H

#include "ICalculadora.h"

class Command
{
	
	public:
		Command(ICalculadora *);
		virtual void execute()=0;
		~Command();
	protected:
		ICalculadora *calc;
		
};

#endif
