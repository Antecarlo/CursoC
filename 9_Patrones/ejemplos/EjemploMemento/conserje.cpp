#include "conserje.h"

Conserje::Conserje()
{
}

void Conserje::addMemento(Memento m)
{
	this->estados.push_back(m);
}
		
void Conserje::historial()
{
	cout << "Historial: " << endl;
	for (int i = estados.size()-1 ; i >= 0 ; i-- )
		cout << i << ": " << estados.at(i).getSavedState() << endl;
	cout << endl;
}

Memento Conserje::ultimo(){
	Memento m;
	
	if (estados.size() > 0)
		m = estados.at(estados.size()-1);
	return m;
}
		
Memento Conserje::getMemento(int i)
{
	return estados.at(i);
}

Conserje::~Conserje()
{
}
