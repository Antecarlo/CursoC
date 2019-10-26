/*
 * FabricaLaberintosEncantados.h
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#ifndef FABRICALABERINTOSENCANTADOS_H_
#define FABRICALABERINTOSENCANTADOS_H_

#include "FabricaLaberintos.h"

class FabricaLaberintosEncantados : public FabricaLaberintos {

public:
	FabricaLaberintosEncantados();

	virtual Habitacion *hacerHabitacion(int) const;
	virtual Puerta *hacerPuerta(Habitacion *, Habitacion *) const;

	virtual ~FabricaLaberintosEncantados();
};

#endif /* FABRICALABERINTOSENCANTADOS_H_ */
