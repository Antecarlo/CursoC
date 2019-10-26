#ifndef FLIPDOWNCOMMAND_H
#define FLIPDOWNCOMMAND_H

#include "Command.h"
#include "Light.h"

class FlipDownCommand : public Command
{
	Light *light;
	
	public:
		FlipDownCommand(Light *);
		inline void execute(){ light->turnOff(); }
		~FlipDownCommand();
	protected:
};

#endif
