#include "peticion.h"

Peticion::Peticion(TiposPeticion id, string descripcion)
{
	this->id = id;
	this->descripcion = descripcion;
}

Peticion::~Peticion()
{
}
