#ifndef CONSERJE_H
#define CONSERJE_H

#include "Memento.h"

#include <vector>
#include <iostream>
using namespace std;

class Conserje
{
	vector<Memento> estados;
	
	public:
		Conserje();
		void addMemento(Memento);
		Memento getMemento(int);
		void historial();
		Memento ultimo();
		~Conserje();
	protected:
};

#endif
