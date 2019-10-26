/*
 * ManejadorSMS.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef MANEJADORSMS_H_
#define MANEJADORSMS_H_

#include "Sucesor.h"
#include "Peticion.h"

#include <memory>

class ManejadorSMS: public Sucesor {

public:
	ManejadorSMS();

	void manejarPeticion(Peticion peticion);

	virtual ~ManejadorSMS();
};

#endif /* MANEJADORSMS_H_ */
