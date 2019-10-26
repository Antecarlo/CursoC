#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

#include "memento.h"

class Persona
{
	string nombre;
	
	public: 
	Persona(){}
	inline string getNombre(){ return this->nombre; } 
	inline void setNombre(string nombre){ this->nombre = nombre;} 
	inline Memento saveToMemento(){ return Memento(this->nombre); } 
	inline void restoreFromMemento(Memento m){ this->nombre = m.getSavedState(); } 
	~Persona(){}
};

#endif
