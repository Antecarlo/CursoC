#ifndef PEDIDO_H
#define PEDIDO_H

#include <vector>
#include <string>
#include <iostream>
using namespace std;

#include "documento.h"
#include "cliente.h"
#include "detalle.h"


class Pedido : public Documento
{
	Cliente cliente;
	vector<Detalle> detalles;
	
	public:
		Pedido();
		Pedido(Cliente);
		string format();
		void addDetalle(Detalle);
		~Pedido();
	protected:
};

#endif
