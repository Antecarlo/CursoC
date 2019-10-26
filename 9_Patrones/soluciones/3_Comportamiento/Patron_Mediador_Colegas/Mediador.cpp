#include "Mediador.h"

Mediador::Mediador() {}

void Mediador::agregarColega(Colega * colega) {
	colegas.push_back(colega);
}


void Mediador::enviar(string mensaje, Colega * originador) {
	for (int i = 0 ; i < colegas.size() ; i++){
		if (colegas[i] != originador){
			colegas[i]->recibir(mensaje);
		}
	}
}

Mediador::~Mediador() {
	for (int i = 0 ; i < colegas.size() ; i++)
		delete colegas[i];
}
