#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{
	private:
		string dni;
		string nombre;
		
	public:
		Cliente();
		Cliente(string dni, string nombre){ this->dni = dni; this->nombre = nombre; }
		~Cliente();
	protected:
};

#endif
