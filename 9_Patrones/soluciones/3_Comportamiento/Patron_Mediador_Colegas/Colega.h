#ifndef _COLEGA_H
#define _COLEGA_H

#include <string>
using namespace std;

class Colega;
#include "IMediador.h"

class Colega {
public: 
	Colega();
	Colega(IMediador *);
	IMediador * getMediador();
	void setMediador(IMediador * mediador);
	void comunicar(string mensaje);
	virtual void recibir(string mensaje) = 0;
	~Colega();

protected: 
	IMediador * mediador;
};

#endif //_COLEGA_H
