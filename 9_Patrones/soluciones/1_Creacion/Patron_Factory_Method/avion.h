#ifndef AVION_H
#define AVION_H

#include "mediotransporte.h"

class Avion : public MedioTransporte
{
	public:
		void arrancar();
		void parar();
		void pilotar();		
};

#endif
