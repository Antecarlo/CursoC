#ifndef SERVIDORREAL_H
#define SERVIDORREAL_H

#include <string>
#include <iostream>
using namespace std;

#include "servidor.h"

class ServidorReal : public Servidor
{
	private:
		int puerto;
		string host;
		
	public:
		ServidorReal(int, string);
		void descargar(string);
		~ServidorReal();
	protected:
};

#endif
