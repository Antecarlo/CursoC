#include "horario.h"

Horario::Horario()
{
}

string Horario::format()
{
	string resul = "";
	
	resul += this->formato->getCabeceras(this->cabeceras);
	resul += this->formato->getTabla(this->tabla);
	
	return resul;
}

Horario::~Horario()
{
}
