#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>
#include <iostream>
using namespace std;

class Memento
{
	long valor;
	string expresion;
	
	public:
		Memento(long=0, string="");
		inline long getValor(){ return this->valor; }
		inline string getExpresion(){ return this->expresion; }
		inline void setValor(long valor){ this->valor = valor; }
		inline void setExpresion(string expresion){ this->expresion = expresion; }
		void imprimir();
		~Memento();
	protected:
};

#endif
