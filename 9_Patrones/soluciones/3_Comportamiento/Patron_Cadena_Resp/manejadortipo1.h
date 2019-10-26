#ifndef MANEJADORTIPO1_H
#define MANEJADORTIPO1_H

#include "manejador.h"

class ManejadorTipo1 : public Manejador
{
	public:
		ManejadorTipo1();
		void manejarPeticion(Peticion p);
		~ManejadorTipo1();
	protected:
};

#endif
