#include "Calculadora.h"

Calculadora::Calculadora(long v):valor(v)
{
	this->expresion = this->convert_string(v);
	conserje.addMemento(this->saveToMemento());
}

Memento Calculadora::saveToMemento()
{
	return Memento(valor, expresion);
}
void Calculadora::restoreFromMemento(Memento m)
{
	this->expresion = m.getExpresion();
	this->valor = m.getValor();
}
string Calculadora::convert_string(long valor)
{
	string val;
	char s[50];
	
	sprintf(s, "%ld", valor);
	val = s;
	return val;		
}
void Calculadora::operar(Operacion *op)
{
	conserje.addMemento(this->saveToMemento());
	this->valor = op->operar(this->valor);
	this->expresion += op->toString();
	cout << this->expresion << " = " << this->valor << endl;
}
void Calculadora::reset()
{
	conserje.addMemento(this->saveToMemento());
	this->valor = 0;
	this->expresion = "0";
	cout << endl << "RESET" << endl;
	cout << this->valor << endl;
}
void Calculadora::undo()
{
	cout << endl << "UNDO" << endl;		
	this->restoreFromMemento(conserje.ultimo());
	cout << this->expresion << " = " << this->valor << endl;
}
void Calculadora::verHistorialDeComandos()
{
	conserje.historial();
}
		
Calculadora::~Calculadora()
{
}
