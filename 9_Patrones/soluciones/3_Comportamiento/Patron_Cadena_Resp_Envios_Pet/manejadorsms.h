#ifndef MANEJADORSMS_H
#define MANEJADORSMS_H

#include "manejador.h"
#include "peticion.h"
#include <iostream>
using namespace std;

class ManejadorSMS : public Manejador
{
	public:
		ManejadorSMS();
		void manejarPeticion(Peticion peticion);
		~ManejadorSMS();
	protected:
};

#endif
