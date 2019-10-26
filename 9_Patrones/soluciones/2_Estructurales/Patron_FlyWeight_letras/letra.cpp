#include "letra.h"

#include <iostream>
using namespace std;

Letra::Letra(char letra, int x, int y, FlyWeight *propiedades)
{
	this->letra = letra;
	this->x = x;
	this->y = y;
	this->propiedades = propiedades; 
}
		
void Letra::print(){
	cout << letra << "(" << x << "," << y << ")";
	if (propiedades != NULL)
		propiedades->imprimir();
}

Letra::~Letra()
{
}
