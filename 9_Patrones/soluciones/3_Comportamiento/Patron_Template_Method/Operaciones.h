#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <vector>
using namespace std;

#include "Empleado.h"

class Operaciones
{
	public:
		virtual bool grabar(Empleado)=0;
		virtual bool borrar(int)=0;
		virtual vector<Empleado> listar()=0;
	protected:
};

#endif
