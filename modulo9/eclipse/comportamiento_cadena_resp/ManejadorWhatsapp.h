/*
 * ManejadorWhatsapp.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef MANEJADORWHATSAPP_H_
#define MANEJADORWHATSAPP_H_

#include "Sucesor.h"

class ManejadorWhatsapp: public Sucesor {
public:
	ManejadorWhatsapp();

	void manejarPeticion(Peticion peticion);

	virtual ~ManejadorWhatsapp();
};

#endif /* MANEJADORWHATSAPP_H_ */
