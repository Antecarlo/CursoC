#ifndef CONSERJE_H
#define CONSERJE_H

#include "memento.h"

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Conserje
{
	vector<Memento> estados;
	
	public:
		Conserje(); 
		void addMemento(Memento); 
		void historial(); 
		Memento getMemento(int); 
		Memento ultimo();
		~Conserje(); 
	protected:
};

#endif
