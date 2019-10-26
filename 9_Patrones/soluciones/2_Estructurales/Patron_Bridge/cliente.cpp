#include "cliente.h"

Cliente::Cliente()
{
}

Cliente::Cliente(string cif, string razon, string dir)
{
	this->cif = cif;
	this->razonSocial = razon;
	this->dir = dir;
}


vector<string> Cliente::toListString()
{
	vector<string> lista;
	
	lista.push_back(this->cif);
	lista.push_back(this->razonSocial);
	lista.push_back(this->dir);
	
	return lista;
}


Cliente::~Cliente()
{
}
