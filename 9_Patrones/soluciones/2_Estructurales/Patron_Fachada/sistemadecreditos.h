#ifndef SISTEMADECREDITOS_H
#define SISTEMADECREDITOS_H

#include "cliente.h"

class SistemaDeCreditos
{
	public:
		SistemaDeCreditos();
		bool comprobarSiHayCredito(Cliente c);
		~SistemaDeCreditos();
	protected:
};

#endif
