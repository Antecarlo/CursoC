/*
 * FabricaLaberintosConBombas.h
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#ifndef FABRICALABERINTOSCONBOMBAS_H_
#define FABRICALABERINTOSCONBOMBAS_H_

#include "FabricaLaberintos.h"

class FabricaLaberintosConBombas : public FabricaLaberintos {

public:
	FabricaLaberintosConBombas();

	virtual Habitacion *hacerHabitacion(int) const;
	virtual Pared *hacerPared() const;

	virtual ~FabricaLaberintosConBombas();
};

#endif /* FABRICALABERINTOSCONBOMBAS_H_ */
