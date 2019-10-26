#ifndef TEXTO_H
#define TEXTO_H

#include <vector>
using namespace std;

#include "flyweightfactory.h"
#include  "letra.h"

class Texto
{
	FlyWeightFactory *factoria;
	vector<Letra> letras;
	
	public:
		Texto(FlyWeightFactory *);
		void generar();
		void print();
		~Texto();
	protected:
};

#endif
