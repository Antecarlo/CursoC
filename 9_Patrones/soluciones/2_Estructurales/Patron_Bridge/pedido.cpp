#include "pedido.h"

Pedido::Pedido(){}

Pedido::Pedido(Cliente cliente)
{
	this->cliente = cliente;	
}


string Pedido::format()
{
	vector<vector<string> > tabla;
	string resul = "";
	
	resul = this->formato->getCabeceras(this->cliente.toListString());
	
	for (int i = 0 ; i < this->detalles.size() ; i++)
	{
		tabla.push_back(this->detalles[i].toListString());
	}
	resul += formato->getTabla(tabla);
	return resul;	
}
	
void Pedido::addDetalle(Detalle d)
{
	this->detalles.push_back(d);
}


Pedido::~Pedido()
{
}
