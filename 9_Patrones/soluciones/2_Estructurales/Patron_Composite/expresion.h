#ifndef EXPRESION_H
#define EXPRESION_H

#include <string>
using namespace std;

class Expresion
{
	public:
		Expresion();
		virtual int getValue()=0;
		virtual string toString()=0;
		~Expresion();
	protected:
};

#endif
