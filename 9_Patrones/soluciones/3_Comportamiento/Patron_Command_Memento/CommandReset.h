#ifndef COMMANDRESET_H
#define COMMANDRESET_H

#include "Command.h"
#include "ICalculadora.h"

class CommandReset : public Command
{
	public:
		CommandReset(ICalculadora *);
		void execute();
		~CommandReset();
	protected:
};

#endif
