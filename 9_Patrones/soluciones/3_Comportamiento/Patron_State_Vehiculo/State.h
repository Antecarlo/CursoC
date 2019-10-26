/**
 * Project Untitled
 */


#ifndef _STATE_H
#define _STATE_H

class State;
#include "Vehiculo.h"


class State {
public: 
	State();
	State(Vehiculo *vehiculo);	
	virtual void acelerar() = 0;
	virtual void frenar() = 0;	
	virtual void contacto() = 0;
	
protected: 
	Vehiculo *vehiculo;
};

#endif //_STATE_H
