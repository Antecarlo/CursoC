#ifndef LETRA_H
#define LETRA_H

#include "flyweight.h"

class Letra
{
	char letra;
	int x,y;
	FlyWeight *propiedades;
	
	public:
		Letra(char, int, int, FlyWeight *);
		void print();
		~Letra();
	protected:
};

#endif
