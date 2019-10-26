#include "CommandReset.h"

CommandReset::CommandReset(ICalculadora *calc):Command(calc)
{
	
}

void CommandReset::execute()
{
	calc->reset();	
}

CommandReset::~CommandReset()
{
}
