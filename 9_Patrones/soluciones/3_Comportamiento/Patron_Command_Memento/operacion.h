#ifndef OPERACION_H
#define OPERACION_H

#include <string>
#include <sstream>
#include <cstdio>
using namespace std;

class Operacion
{

	public:
		Operacion(long=0);
		virtual long operar(long)=0;
		virtual string toString()=0;
		string convert_string(long);
		~Operacion();
	protected:
		long semilla;
	
};

#endif
