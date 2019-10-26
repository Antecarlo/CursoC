#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2;
#include "IteradorVector.h"

class Vector2
{
	int *_datos;
	int n;
	
	public:
		Vector2(int n);
		inline int getValor(int pos){ return _datos[pos]; }
		inline void setValor(int pos, int valor){ _datos[pos] = valor;}
		inline int dimension(){ return this->n; }
		inline const int *getDatos(){ return _datos; }
		IteradorVector *iterador();
		~Vector2();
	protected:
};

#endif
