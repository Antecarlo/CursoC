#include "App.h"

App::App(TiposDeDestino tipo)
{
	switch(tipo){
		case BD:
			op = new OperacionesBD();
			break;
			
		case File:
			op = new OperacionesFile();
			break;
			
		default:
			op = new OperacionesBD();			
	}
}

void App::grabar()
{
	cout << "Pedir datos del Empleado:" << endl;
	op->grabar(Empleado("AAA", 1, "GMV",2000.0));
}
	
void App::borrar()
{
	cout << "Seleccionar el id a borrar" << endl;
	op->borrar(34);
}
	
void App::listar()
{
	vector<Empleado> emp = op->listar();
	for (auto& it : emp )
		it.imprimir();
}

App::~App()
{
	delete op;
}
