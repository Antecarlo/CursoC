#ifndef CONSTANTE_H
#define CONSTANTE_H

#include "Expresion.h"
#include "VisitanteExpresion.h"

class Constante : public Expresion
{
	int _valor;
		
	public:
		Constante();
		Constante(int);
		void aceptar(VisitanteExpresion *);
		inline int getValor(){ return _valor;}
		~Constante();
	protected:
};

#endif
