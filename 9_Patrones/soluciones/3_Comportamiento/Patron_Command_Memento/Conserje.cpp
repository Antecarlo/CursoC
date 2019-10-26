#include "Conserje.h"

Conserje::Conserje()
{
}

void Conserje::addMemento(Memento m)
{
	estados.push_back(m);
}

Memento Conserje::getMemento(int i)
{
	return estados[i];
}

void Conserje::historial()
{
	cout << "Historial:" << endl;
	for (auto m : estados)
		m.imprimir();
	cout << endl;
}

Memento Conserje::ultimo(){
	int tam = estados.size();
	Memento m;
	
	if (tam > 0){
		m = getMemento(tam-1);
				
		// Borrar el ultimo
		estados.erase(estados.end());					
	}
	return m;
}

Conserje::~Conserje()
{
}
