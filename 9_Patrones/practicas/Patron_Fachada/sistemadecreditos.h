#ifndef SISTEMADECREDITOS_H
#define SISTEMADECREDITOS_H

#include "Cliente.h"

class SistemaDeCreditos
{
	public:
		SistemaDeCreditos();
		bool comprobarSiHayCredito(Cliente c);
		~SistemaDeCreditos();
	protected:
};

#endif
