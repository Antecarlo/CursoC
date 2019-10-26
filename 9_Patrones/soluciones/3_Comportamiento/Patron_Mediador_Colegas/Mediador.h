#ifndef _MEDIADOR_H
#define _MEDIADOR_H

#include "IMediador.h"

#include <vector>
#include <string>
using namespace std;

class Mediador: public IMediador {
public: 	
	Mediador();
	void agregarColega(Colega * colega);
	void enviar(string mensaje, Colega * originador);
	~Mediador();

private: 
	vector<Colega *> colegas;
};

#endif //_MEDIADOR_H
