#include "banco.h"

#include <iostream>
using namespace std;

Banco::Banco()
{
}

bool Banco::comprobarCuentaCliente(Cliente c, double cantidad){
	cout << "el banco comprueba el saldo del cliente" << endl;
	return true;
}

Banco::~Banco()
{
}
