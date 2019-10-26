#include "usuario.h"

bool operator==(const Usuario &u1, const Usuario &u2)
{
	return u1.numero == u2.numero && u1.nombre == u2.nombre;
}

Usuario::Usuario(){}

Usuario::Usuario(int numero, string nombre){
	this->numero = numero;
	this->nombre = nombre;
}

string Usuario::toString(){
	char s[50];
	
	sprintf(s, "%d", this->numero);
	string resul = s;
	
	resul += " " + this->nombre;
	return resul;	
}

Usuario::~Usuario(){}
