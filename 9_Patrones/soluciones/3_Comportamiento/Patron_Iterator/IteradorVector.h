#ifndef ITERADORVECTOR_H
#define ITERADORVECTOR_H

class IteradorVector;
#include "Vector2.h"

class IteradorVector
{
	Vector2 *v2;
	int _posicion;
	
	public:
		IteradorVector(Vector2 *);
		bool hasNext();
		int next();
		~IteradorVector();
	protected:
};

#endif
