#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

#include "ICalculadora.h"
#include "Memento.h"
#include "Operacion.h"
#include "Conserje.h"


class Calculadora : public ICalculadora
{
	long valor;
	string expresion;
	Conserje conserje;
	
	public:
		Calculadora(long=0);
		Memento saveToMemento();
		void restoreFromMemento(Memento);
		string convert_string(long);
		void operar(Operacion *);
		void reset();
		void undo();
		void verHistorialDeComandos();
		~Calculadora();
	protected:
};

#endif
