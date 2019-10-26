#ifndef OPERACIONESBD_H
#define OPERACIONESBD_H

#include <iostream>
using namespace std;

#include "Operaciones.h"

class OperacionesBD : public Operaciones
{
	public:
		OperacionesBD();
		bool grabar(Empleado);
		bool borrar(int);
		vector<Empleado> listar();
		~OperacionesBD();
	protected:
};

#endif
