#include "Constante.h"

Constante::Constante(){
}

Constante::Constante(int c):_valor(c){}
		
void Constante::aceptar(VisitanteExpresion *vi)
{
	vi->visitarConstante(this);
}
	
Constante::~Constante(){}
