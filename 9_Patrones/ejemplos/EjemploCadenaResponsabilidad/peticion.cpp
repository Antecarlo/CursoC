#include "peticion.h"

Peticion::Peticion(TIPO tipo, string contenido)
{
	this->tipo = tipo;
	this->contenido = contenido;
}

string Peticion::toString()
{
	string t="";
	
	switch(tipo)
	{
		case SMS:
			t="SMS";
			break;
		case EMAIL:
			t="email";
			break;
		case WHATSAPP:
			t="whatsapp";
			break;		
	}
	return t + " => " + contenido;
}
Peticion::~Peticion()
{
}
