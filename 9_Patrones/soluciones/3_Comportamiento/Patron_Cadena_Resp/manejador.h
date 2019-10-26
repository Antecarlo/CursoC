#ifndef MANEJADOR_H
#define MANEJADOR_H

#include "peticion.h"

class Manejador
{
	public:
		Manejador(){}
		void setManejador(Manejador *s){ this->sucesor = s; }
		virtual void manejarPeticion(Peticion p)=0;
		virtual ~Manejador(){}
		
	protected:
		Manejador *sucesor;
};

#endif
