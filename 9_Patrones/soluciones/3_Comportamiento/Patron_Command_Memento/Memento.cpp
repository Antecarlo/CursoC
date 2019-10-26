#include "Memento.h"

Memento::Memento(long v, string e):valor(v),expresion(e)
{
}

void Memento::imprimir()
{
	cout << "VALOR: " << valor << " - EXPRESION: " << expresion << endl;
}

Memento::~Memento()
{
}
