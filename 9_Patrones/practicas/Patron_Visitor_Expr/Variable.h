#ifndef VARIABLE_H
#define VARIABLE_H

#include "Expresion.h"


#include <string>
using namespace std;

class Variable : public Expresion
{
	string _variable;
	
	public:
		Variable(string);
		inline string getNombre(){ return _variable;}
		~Variable();
	protected:
};

#endif
