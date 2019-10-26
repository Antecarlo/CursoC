#include <iostream>
using namespace std;

#include "memento.h"
#include "persona.h"
#include "conserje.h"

int main(int argc, char** argv) {
	Conserje c;
	Persona p;
	Memento m;
	
	p.setNombre("Andres");
	
	// Guardar estado:
	c.addMemento(p.saveToMemento());
	
	// Modificar estado:
	p.setNombre("Andres Gomez");
	
	// Guardar estado:
	c.addMemento(p.saveToMemento());
	
	// Modificar estado:
	p.setNombre("Andres Gomez Garcia");
	c.addMemento(p.saveToMemento());
	
	c.historial();
	
	p.setNombre("A.Gomez");
	
	cout << "Estado actual de la persona " << p.getNombre() << endl;	
	p.restoreFromMemento(c.ultimo());
	cout << "Estado despues de restore de la persona " << p.getNombre() << endl;
	
	return 0;
}
