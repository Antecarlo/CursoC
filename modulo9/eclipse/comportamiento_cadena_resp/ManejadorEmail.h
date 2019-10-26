/*
 * ManejadorEmail.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef MANEJADOREMAIL_H_
#define MANEJADOREMAIL_H_

#include "Sucesor.h"

class ManejadorEmail: public Sucesor {
public:
	ManejadorEmail();

	void manejarPeticion(Peticion peticion);

	virtual ~ManejadorEmail();
};

#endif /* MANEJADOREMAIL_H_ */
