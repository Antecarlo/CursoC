#ifndef SWITCH_H
#define SWITCH_H

#include "Command.h"

class Switch
{
	Command *flipUpCommand;
	Command *flipDownCommand;
	
	public:
		Switch(Command *, Command *);
		void flipUp();
		void flipDown();
	protected:
};

#endif
