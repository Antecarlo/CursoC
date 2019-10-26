#include "detalle.h"

Detalle::Detalle()
{
}

Detalle::Detalle(string producto, int cantidad, double precio)
{
	this->producto = producto;
	this->cantidad = cantidad;
	this->precio = precio;
	
}

vector<string> Detalle::toListString()
{
	vector<string> lista;
	
	lista.push_back(this->producto);
	lista.push_back(toString(this->cantidad));
	lista.push_back(toString(this->precio));
	lista.push_back(toString(getTotal()));
	
	return lista;
}

string Detalle::toString(int val)
{
	string valStr;
	char s[30];
	sprintf(s,"%d", val);
	valStr = s;
	return valStr;
}

string Detalle::toString(double val)
{
	string valStr;
	char s[30];
	sprintf(s,"%f", val);
	valStr = s;
	return valStr;
}


Detalle::~Detalle()
{
}
