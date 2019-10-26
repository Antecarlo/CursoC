#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>
using namespace std;

class Memento
{
	string estado;
	
	public:
		Memento(string);
		inline string getSavedState(){ return this->estado; }
		~Memento();
	protected:
};

#endif
