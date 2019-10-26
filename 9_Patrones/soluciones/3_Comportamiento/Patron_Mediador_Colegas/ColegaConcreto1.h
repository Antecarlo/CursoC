/**
 * Project Untitled
 */


#ifndef _COLEGACONCRETO1_H
#define _COLEGACONCRETO1_H

#include "Colega.h"


class ColegaConcreto1: public Colega {
public: 
	ColegaConcreto1(IMediador * mediador);
	void recibir(string mensaje);
	~ColegaConcreto1();
};

#endif //_COLEGACONCRETO1_H
