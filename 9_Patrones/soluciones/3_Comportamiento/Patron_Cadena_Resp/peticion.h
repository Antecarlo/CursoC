#ifndef PETICION_H
#define PETICION_H

#include <string>
using namespace std;

class Peticion
{
	private:
		int value;
		string descripcion;
		
	public:
		Peticion();
		Peticion(int n, string v){ this->value=n; this->descripcion=v;}
		int getValue(){ return value; }
		string getDescripcion(){ return descripcion; }
		~Peticion();
	protected:
};

#endif
