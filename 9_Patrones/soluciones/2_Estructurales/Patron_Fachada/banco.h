#ifndef BANCO_H
#define BANCO_H

#include "cliente.h"

class Banco
{

		
	public:
		Banco();
		bool comprobarCuentaCliente(Cliente c, double cantidad);
		~Banco();
	protected:
};

#endif
