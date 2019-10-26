#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>

using namespace std;

class Empleado
{
	string nombre;
	int codigo;
	string empresa;
	double sueldo;
	
	public:
		Empleado(string="", int =0, string="", double=0.0);
		void imprimir();
		~Empleado();
	protected:
};

#endif
