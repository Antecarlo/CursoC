/*
 * ParedExplosionada.h
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#ifndef PAREDEXPLOSIONADA_H_
#define PAREDEXPLOSIONADA_H_

#include <iostream>
using namespace std;
#include "Pared.h"

class ParedExplosionada: public Pared {

public:
	ParedExplosionada();
	virtual void entrar();
	virtual ~ParedExplosionada();

};
#endif /* PAREDEXPLOSIONADA_H_ */
