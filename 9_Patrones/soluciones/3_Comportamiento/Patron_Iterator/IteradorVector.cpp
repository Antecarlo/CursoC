#include "IteradorVector.h"

IteradorVector::IteradorVector(Vector2 *v2)
{
	this->v2 = v2;
	this->_posicion = 0;
}


bool IteradorVector::hasNext()
{
	if (_posicion < v2->dimension())
		return true;
	else
		return false;
}

int IteradorVector::next()
{
	const int *_vector = v2->getDatos();
	int valor = _vector[_posicion];
	_posicion++;
	return valor;
}

IteradorVector::~IteradorVector()
{
}
