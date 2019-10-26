#include "operacion.h"

Operacion::Operacion(long semilla)
{
	this->semilla = semilla;
}

string Operacion::convert_string(long valor)
{
	string val;
	char s[50];
	
	sprintf(s, "%ld", valor);
	val = s;
	return val;		
}

Operacion::~Operacion()
{
}
