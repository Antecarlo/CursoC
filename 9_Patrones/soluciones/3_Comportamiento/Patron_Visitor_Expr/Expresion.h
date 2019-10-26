#ifndef EXPRESION_H
#define EXPRESION_H

class Expresion
{
	public:
		Expresion(){}
		virtual void aceptar(class VisitanteExpresion *)=0;
		~Expresion(){}
};

#endif
