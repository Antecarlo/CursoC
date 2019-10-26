#ifndef SERVIDORPROXY_H
#define SERVIDORPROXY_H

#include "servidor.h"
#include "servidorreal.h"

#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class ServidorProxy : public Servidor
{
	private:
		int puerto;
		string host;
		ServidorReal *servidorReal;
		
		bool restringido(string);
		
	public:
		ServidorProxy(int, string);
		void descargar(string);
		~ServidorProxy();
	protected:
};

#endif
