#ifndef RELOJDIGITAL_H
#define RELOJDIGITAL_H

#include "Reloj.h"
#include "Observador.h"
#include "Sujeto.h"

class RelojDigital : public Observador
{
	Reloj *reloj;
	
	public:
		RelojDigital(Reloj *);
		void actualizar(Sujeto *sujeto);
		~RelojDigital();
	protected:
};

#endif
