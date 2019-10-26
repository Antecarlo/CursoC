#ifndef MANEJADOREMAIL_H
#define MANEJADOREMAIL_H

#include "manejador.h"
#include "peticion.h"
#include <iostream>
using namespace std;

class ManejadorEMail : public Manejador
{
	public:
		ManejadorEMail();
		void manejarPeticion(Peticion peticion);
		~ManejadorEMail();
	protected:
};

#endif
