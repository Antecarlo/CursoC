#ifndef RELOJANALOGICO_H
#define RELOJANALOGICO_H

#include "Reloj.h"
#include "Observador.h"
#include "Sujeto.h"

class RelojAnalogico : public Observador
{
	Reloj *reloj;
	
	public:
		RelojAnalogico(Reloj *);
		void actualizar(Sujeto *sujeto);
		~RelojAnalogico();
	protected:
};

#endif
