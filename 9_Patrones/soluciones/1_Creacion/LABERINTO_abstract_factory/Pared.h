/*
 * Pared.h
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#ifndef PARED_H_
#define PARED_H_

#include <iostream>
using namespace std;
#include "LugarDeMapa.h"

class Pared: public LugarDeMapa {

public:
	Pared();
	void entrar();
	virtual ~Pared();

};
#endif /* PARED_H_ */
