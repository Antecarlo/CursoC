/*
 * Laberinto.h
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#ifndef LABERINTO_H_
#define LABERINTO_H_

#include "Habitacion.h"

using namespace std;

class Laberinto {

private:
	Habitacion *habitaciones[5];
	int ocupacion;

public:
	Laberinto();
	void insertarHabitacion(Habitacion *);
	Habitacion *getHabitacion(int) const;
	int getNumHabitaciones() const;
	virtual ~Laberinto();
};
#endif /* LABERINTO_H_ */
