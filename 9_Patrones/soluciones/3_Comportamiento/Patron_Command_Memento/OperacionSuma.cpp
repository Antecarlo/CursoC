#include "OperacionSuma.h"

OperacionSuma::OperacionSuma(long semilla):Operacion(semilla)
{
}

long OperacionSuma::operar(long valor)
{
	return semilla + valor;
}
		
string OperacionSuma::toString()
{
	return " + " + this->convert_string(semilla);
}

OperacionSuma::~OperacionSuma()
{
}
