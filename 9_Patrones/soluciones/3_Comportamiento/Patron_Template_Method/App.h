#ifndef APP_H
#define APP_H

#include <iostream>
using namespace std;

#include "Operaciones.h"
#include "OperacionesBD.h"
#include "OperacionesFile.h"

enum TiposDeDestino {BD, File};

class App
{
	Operaciones *op;
	
	public:
		App(TiposDeDestino);
		void grabar();
		void borrar();
		void listar();
		~App();
	protected:
};

#endif
