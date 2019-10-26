#include "CommandOperacion.h"

CommandOperacion::CommandOperacion(ICalculadora *calc, Operacion *op):Command(calc)
{
	this->op = op;
}

void CommandOperacion::execute()
{
	calc->operar(op);
}

CommandOperacion::~CommandOperacion()
{
}
