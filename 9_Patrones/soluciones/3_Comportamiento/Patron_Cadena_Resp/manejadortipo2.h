#ifndef MANEJADORTIPO2_H
#define MANEJADORTIPO2_H


#include "manejador.h"

class ManejadorTipo2 : public Manejador
{
	public:
		ManejadorTipo2();
		void manejarPeticion(Peticion p);
		~ManejadorTipo2();
	protected:
};


#endif
