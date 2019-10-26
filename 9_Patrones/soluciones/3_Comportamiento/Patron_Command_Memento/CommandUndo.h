#ifndef COMMANDUNDO_H
#define COMMANDUNDO_H

#include "Command.h"
#include "ICalculadora.h"

class CommandUndo : public Command
{
	public:
		CommandUndo(ICalculadora *);
		void execute();
		~CommandUndo();
	protected:
};

#endif
