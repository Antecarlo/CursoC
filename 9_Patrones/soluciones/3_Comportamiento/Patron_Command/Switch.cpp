#include "Switch.h"


Switch::Switch(Command *up, Command *down)
{
	this->flipDownCommand = down;
	this->flipUpCommand = up;
}
	
void Switch::flipUp()
{
	flipUpCommand->execute();
}
	
void Switch::flipDown()
{
	flipDownCommand->execute();
}
