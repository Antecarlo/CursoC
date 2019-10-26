#ifndef SUJETO_H
#define SUJETO_H

class Sujeto;
#include "Observador.h"
#include <vector>
#include <string>
using namespace std;

class Sujeto
{
	vector<Observador *> observadores;
	
	public:
		Sujeto();
		void add(Observador *);
		void deleteObs(Observador *);
		void notificar();	
		virtual string toString()=0;	
		~Sujeto();
	protected:
};

#endif
