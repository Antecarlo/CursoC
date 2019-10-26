#ifndef OPBINARIA_H
#define OPBINARIA_H

#include "Expresion.h"

class OpBinaria : public Expresion
{
	Expresion *_izq;
	Expresion *_der;
	
	public:
		OpBinaria(Expresion *, Expresion *);
		inline Expresion *getIzq(){ return _izq; }
		inline Expresion *getDer(){ return _der; }
		~OpBinaria();	
};

#endif
