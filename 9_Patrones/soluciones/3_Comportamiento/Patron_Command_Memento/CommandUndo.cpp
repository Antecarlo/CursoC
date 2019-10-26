#include "CommandUndo.h"

CommandUndo::CommandUndo(ICalculadora *calc):Command(calc)
{
}

void CommandUndo::execute()
{
	calc->undo();
}

CommandUndo::~CommandUndo()
{
}
