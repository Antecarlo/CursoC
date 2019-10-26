/**
 * Project Untitled
 */


#ifndef _CIRCULO_H
#define _CIRCULO_H

#include "Figura.h"
#include <string>
#include <iostream>
using namespace std;

class Circulo: public Figura {
public:    
	Figura * clone();
	void draw();
	inline void setRadio(int radio){ this->radio=radio;}
	Circulo(int r, string c);
	~Circulo();
private: 
    int radio;
};

#endif //_CIRCULO_H
