#ifndef _ESCENA_H
#define _ESCENA_H

#include "Figura.h"
#include <vector>
using namespace std;

class Escena {
public:     
	Escena();
	void addFigura(Figura * figura);
	void draw();
	~Escena();
private: 
    vector<Figura *> figuras;
};

#endif //_ESCENA_H
