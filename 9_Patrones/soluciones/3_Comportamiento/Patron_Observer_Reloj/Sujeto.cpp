#include "Sujeto.h"

Sujeto::Sujeto()
{
}

void Sujeto::add(Observador *obs) {
	observadores.push_back(obs);
}
	
void Sujeto::deleteObs(Observador *obs) {
	//observadores.remove(obs);
}
	
void Sujeto::notificar() {
	for (int i = 0 ; i < observadores.size() ; i++)
		observadores[i]->actualizar(this);
}

Sujeto::~Sujeto()
{
}
