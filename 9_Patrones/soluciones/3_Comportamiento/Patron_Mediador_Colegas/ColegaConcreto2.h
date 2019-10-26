/**
 * Project Untitled
 */


#ifndef _COLEGACONCRETO2_H
#define _COLEGACONCRETO2_H

#include "Colega.h"
#include <iostream>
using namespace std;


class ColegaConcreto2: public Colega {
public: 
	ColegaConcreto2(IMediador * mediador);
	void recibir(string mensaje);
	~ColegaConcreto2();
};

#endif //_COLEGACONCRETO2_H
