#include "OperacionResta.h"

OperacionResta::OperacionResta(long semilla):Operacion(semilla)
{
}

long OperacionResta::operar(long valor)
{
	return valor - semilla;
	
}
		
string OperacionResta::toString()
{
	return " - " + this->convert_string(semilla);
}

OperacionResta::~OperacionResta()
{
}
