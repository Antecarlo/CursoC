#ifndef MANEJADOR_H
#define MANEJADOR_H

#include "peticion.h"

class Manejador
{
	public:
		Manejador();
		inline void setSucesor(Manejador *sucesor){ this->sucesor = sucesor; }
		virtual void manejarPeticion(Peticion) = 0;
		~Manejador();
		
	protected:
		Manejador *sucesor;
};

#endif
