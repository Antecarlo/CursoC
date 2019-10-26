/**
 * Project Untitled
 */


#ifndef _STATEAPAGADO_H
#define _STATEAPAGADO_H

#include "State.h"

#include <iostream>
using namespace std;


class StateApagado: public State {
	public: 
		StateApagado(Vehiculo *vehiculo);		
		void acelerar();		
		void frenar();		
		void contacto();
};

#endif //_STATEAPAGADO_H
