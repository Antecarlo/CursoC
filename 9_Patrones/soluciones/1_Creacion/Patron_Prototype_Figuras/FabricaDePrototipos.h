#ifndef _FABRICADEPROTOTIPOS_H
#define _FABRICADEPROTOTIPOS_H

#include <map>
using namespace std;

#include "Figura.h"
#include "Triangulo.h"
#include "Circulo.h"
#include <iostream>
using namespace std;

enum TIPOS_FIGURA {CIRCULO,TRIANGULO};

class FabricaDePrototipos {
public: 
	Figura * getFigura(TIPOS_FIGURA tipo);   
	FabricaDePrototipos();
	~FabricaDePrototipos();

private: 
    map<TIPOS_FIGURA,Figura *> prototipos;
    
	void instanciarPrototipos();
};

#endif //_FABRICADEPROTOTIPOS_H
