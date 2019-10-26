/**
 * Project Untitled
 */


#ifndef _VEHICULO_H
#define _VEHICULO_H

class Vehiculo;
#include "State.h"

#include <iostream>
using namespace std;


class Vehiculo {
public: 
	Vehiculo();
	Vehiculo(int combustible);
	State *getEstado();
	void setEstado(State *estado);
	int getVelocidad();
	void setVelocidad(int velocidad);
	int getCombustible();
	void acelerar();
	void frenar();
	void contacto();
	void modificarVelocidad(int km);
	void modificarCombustible(int litros);

private: 
	int velocidad;
	int combustible;
	State *estado;
};

#endif //_VEHICULO_H
