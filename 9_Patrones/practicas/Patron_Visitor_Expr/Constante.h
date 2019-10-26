#ifndef CONSTANTE_H
#define CONSTANTE_H

#include "Expresion.h"


class Constante : public Expresion
{
	int _valor;
		
	public:
		Constante();
		Constante(int);
		inline int getValor(){ return _valor;}
		~Constante();
	protected:
};

#endif
