#include "Vector2.h"

Vector2::Vector2(int n)
{
	_datos = new int[n];
	this->n = n;
	for (int i = 0 ; i < n ; i++)
		_datos[i] = i+1;
}

IteradorVector *Vector2::iterador()
{ 
	return new IteradorVector(this);
}

Vector2::~Vector2()
{
	delete [] _datos;
}
