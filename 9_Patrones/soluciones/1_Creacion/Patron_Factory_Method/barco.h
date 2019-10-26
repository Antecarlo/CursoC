#ifndef BARCO_H
#define BARCO_H

#include "mediotransporte.h"

class Barco : public MedioTransporte
{
	public:
		void arrancar();
		void parar();
		void pilotar();		

};

#endif
