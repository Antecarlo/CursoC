#include "Empleado.h"

	
Empleado::Empleado(string nombre, int codigo, string empresa, double sueldo)
{
	this->nombre = nombre;
	this->codigo = codigo;
	this->empresa = empresa;
	this->sueldo = sueldo;
}
		
void Empleado::imprimir()
{
	cout << nombre << " " << codigo << " " << empresa << " " << sueldo << endl;
}
	
Empleado::~Empleado()
{
}
