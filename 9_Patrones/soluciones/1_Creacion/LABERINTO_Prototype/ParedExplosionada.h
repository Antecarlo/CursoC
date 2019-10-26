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
	ParedExplosionada(const ParedExplosionada &);
	virtual void entrar();
	virtual ParedExplosionada *clonar();
	virtual ~ParedExplosionada();

};
#endif /* PAREDEXPLOSIONADA_H_ */
