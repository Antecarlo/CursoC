#ifndef CONSERJE_H
#define CONSERJE_H

#include <vector>
#include <iostream>
#include "memento.h"
using namespace std;

class Conserje
{
	vector<Memento> estados;
	
	public:
		Conserje();	
		void addMemento(Memento);
		void historial();
		Memento getMemento(int);	
		~Conserje();
	protected:
};

#endif
