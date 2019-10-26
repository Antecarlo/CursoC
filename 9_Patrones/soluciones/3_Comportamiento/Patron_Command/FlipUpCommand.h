#ifndef FLIPUPCOMMAND_H
#define FLIPUPCOMMAND_H

#include "Command.h"
#include "Light.h"

class FlipUpCommand : public Command
{
	Light *light;
	
	public:
		FlipUpCommand(Light *);
		inline void execute(){ light->turnOn(); }
		~FlipUpCommand();
	protected:
};

#endif
