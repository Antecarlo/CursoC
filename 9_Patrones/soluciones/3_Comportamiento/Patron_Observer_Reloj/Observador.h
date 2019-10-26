#ifndef OBSERVADOR_H
#define OBSERVADOR_H

class Observador;
#include "Sujeto.h"

class Observador
{
	public:
		Observador();
		virtual void actualizar(Sujeto *sujeto)=0;
		~Observador();
	protected:
};

#endif
