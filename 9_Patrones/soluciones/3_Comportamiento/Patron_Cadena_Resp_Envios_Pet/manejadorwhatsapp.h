#ifndef MANEJADORWHATSAPP_H
#define MANEJADORWHATSAPP_H

#include "manejador.h"
#include "peticion.h"
#include <iostream>
using namespace std;

class ManejadorWhatsApp : public Manejador
{
	public:
		ManejadorWhatsApp();
		void manejarPeticion(Peticion peticion);
		~ManejadorWhatsApp();
	protected:
};

#endif
