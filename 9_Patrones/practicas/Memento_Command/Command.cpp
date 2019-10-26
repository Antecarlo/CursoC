#include "Command.h"

Command::Command(ICalculadora *calc)
{
	this->calc = calc;
}

Command::~Command()
{
}
