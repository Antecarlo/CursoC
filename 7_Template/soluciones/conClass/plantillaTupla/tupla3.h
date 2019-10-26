#ifndef TUPLA3_H
#define TUPLA3_H

#include "tupla.h"

template<class T>class Tupla3 : public Tupla<T>
{
	private:
	T c;
		
	public:
		Tupla3():Tupla<T>(){}
		Tupla3(T a, T b, T c):Tupla<T>(a,b){ this->c = c; }		
		~Tupla3(){}
	protected:
};

#endif
