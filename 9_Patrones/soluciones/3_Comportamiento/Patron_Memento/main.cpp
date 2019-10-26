#include <iostream>
using namespace std;

#include "conserje.h"
#include "persona.h"

int main(int argc, char** argv) {
	Conserje conserje;
	Persona p;
	
	p.setNombre("Ana");
	cout << "Nombre actual: " << p.getNombre() << endl;
	
	p.setNombre("Sonia");
	cout << "Nombre actual: " << p.getNombre() << endl;
	
	conserje.addMemento(p.saveToMemento());
	cout << "Se ha grabado el memento" << endl;
	
	conserje.historial();
	
	p.setNombre("Alberto");
	cout << "Nombre actual: " << p.getNombre() << endl;
	
	cout << "Se restaura el memento" << endl;
	p.restoreFromMemento(conserje.getMemento(0));
	cout << "Nombre actual: " << p.getNombre() << endl;
	/*
	Memento m1 = conserje.getMemento(0);
	Memento m2 = conserje.getMemento(1);
	
	cout << "m1: " << m1.getSavedState() << endl;
	cout << "m2: " << m2.getSavedState() << endl;*/
	return 0;
}
