#ifndef MANEJADORWHATSAPP_H
#define MANEJADORWHATSAPP_H

#include "manejador.h"
#include "peticion.h"

#include <iostream>
using namespace std;

class ManejadorWhatsapp : public Manejador
{
	public:
		ManejadorWhatsapp();
		void procesarPeticion(Peticion);
		~ManejadorWhatsapp();
	protected:
};

#endif
