#include "fachada.h"

#include <iostream>
using namespace std;

Fachada::Fachada()
{
}

bool Fachada::concederHipoteca(Cliente c, double valorHipoteca){
	if (!this->banco.comprobarCuentaCliente(c, valorHipoteca)){
		cout << "Rechazo de la Hipoteca por el banco" << endl;
		return false;
	} 
	
	if (!this->sm.noHayImpagos(c)){
		cout << "Rechazo de la Hipoteca por el sistema de morosidad" << endl;
		return false;
	}
	
	if (!this->sc.comprobarSiHayCredito(c)){
		cout << "Rechazo de la Hipoteca por el sistema de creditos" << endl;
		return false;
	}
	return true;
	
}
Fachada::~Fachada()
{
}
