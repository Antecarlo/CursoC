#include "conserje.h"

Conserje::Conserje()
{
}

void Conserje::addMemento(Memento m)
{ 
	estados.push_back(m); 
}

Memento Conserje::getMemento(int index)
{ 
	return estados[index]; 
}

void Conserje::historial()
{
	cout << endl <<  "Historial:" << endl;
	for (int i = 0 ; i < estados.size() ; i++)
		cout << estados.at(i).getSavedState() << endl;	
}

Conserje::~Conserje()
{
}
