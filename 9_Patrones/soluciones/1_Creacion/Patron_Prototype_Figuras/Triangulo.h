/**
 * Project Untitled
 */


#ifndef _TRIANGULO_H
#define _TRIANGULO_H

#include "Figura.h"
#include <iostream>
using namespace std;

class Triangulo: public Figura {
public: 
    
	Figura * clone(); 
	void draw();
	Triangulo(int b, int h, string c);
	~Triangulo();
private: 
    int base;
    int altura;
};

#endif //_TRIANGULO_H
