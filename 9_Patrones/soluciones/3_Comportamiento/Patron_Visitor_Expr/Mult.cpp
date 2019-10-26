#include "Mult.h"

Mult::Mult(Expresion *e1, Expresion *e2):OpBinaria(e1,e2)
{
}

void Mult::aceptar(class VisitanteExpresion *vi)
{
		vi->visitarMult(this);
}

Mult::~Mult()
{
}
