#include "expresionnumerica.h"

ExpresionNumerica::ExpresionNumerica(int numero)
{
	this->numero = numero;
}

string ExpresionNumerica::toString()
{
	char s[30];
	string valor;
	sprintf(s, "%d", this->numero);
	valor = s;
	return valor;	
}

ExpresionNumerica::~ExpresionNumerica()
{
}
