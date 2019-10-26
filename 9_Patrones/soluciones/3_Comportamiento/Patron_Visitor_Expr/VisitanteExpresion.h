#ifndef VISITANTEEXPRESION_H
#define VISITANTEEXPRESION_H


class VisitanteExpresion
{
	public:
		VisitanteExpresion(){}
		virtual void visitarSuma(class Suma *)=0;
		virtual void visitarMult(class Mult *)=0;
		virtual void visitarVariable(class Variable *)=0;
		virtual void visitarConstante(class Constante *)=0;	
		~VisitanteExpresion(){}
};

#endif
