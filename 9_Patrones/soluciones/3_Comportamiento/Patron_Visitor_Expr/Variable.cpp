#include "Variable.h"

Variable::Variable(string var):_variable(var)
{
}

void Variable::aceptar(VisitanteExpresion *vi)
{
	vi->visitarVariable(this);
}

Variable::~Variable()
{
}
