#ifndef PETICION_H
#define PETICION_H

#include <string>
using namespace std;

enum TIPO { SMS, EMAIL, WHATSAPP};

class Peticion
{
	TIPO tipo;
	string contenido;
	
	public:
		Peticion(TIPO=SMS, string="hola");
		inline TIPO getTipo(){ return tipo; }
		inline string getContenido(){ return contenido; }
		string toString();
		~Peticion();
	protected:
};

#endif
