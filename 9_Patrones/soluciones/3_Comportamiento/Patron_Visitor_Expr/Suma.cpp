#include "Suma.h"

Suma::Suma(Expresion *e1, Expresion *e2):OpBinaria(e1,e2)
{
}


void Suma::aceptar(VisitanteExpresion *vi)
{
	vi->visitarSuma(this);
}


Suma::~Suma()
{
}
