#ifndef MANEJADOR_H
#define MANEJADOR_H

#include "peticion.h"

class Manejador
{
	public:
		Manejador();
		void setSucesor(Manejador *m){this->sucesor = m; } 
		virtual void procesarPeticion(Peticion)=0;
		~Manejador();
		
	protected:
		Manejador *sucesor;
};

#endif
