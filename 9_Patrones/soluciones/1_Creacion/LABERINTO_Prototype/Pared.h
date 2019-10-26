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
	Pared(const Pared &);
	virtual void entrar();
	virtual Pared *clonar();
	virtual ~Pared();

};
#endif /* PARED_H_ */
