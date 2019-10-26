#ifndef OPERACIONESFILE_H
#define OPERACIONESFILE_H

#include "Empleado.h"
#include "Operaciones.h"

class OperacionesFile : public Operaciones
{
	public:
		OperacionesFile();
		bool grabar(Empleado);
		bool borrar(int);
		vector<Empleado> listar();
		~OperacionesFile();
	protected:
};

#endif
