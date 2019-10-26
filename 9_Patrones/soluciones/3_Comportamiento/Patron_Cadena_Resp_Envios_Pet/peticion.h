#ifndef PETICION_H
#define PETICION_H

#include <string>
using namespace std;

enum TiposPeticion { SMS, EMAIL, WHATSAPP, XXX};

class Peticion
{
	TiposPeticion id;
	string descripcion;
		
	public:
		Peticion(TiposPeticion=XXX, string="");
		inline TiposPeticion getId(){ return this->id; }
		inline string getDescripcion(){ return this->descripcion; }
		inline void setId(TiposPeticion id){ this->id = id; }
		inline void setDescripcion(string descripcion){ this->descripcion = descripcion; } 
		~Peticion();
	protected:
};

#endif
