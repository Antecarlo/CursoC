/**
 * Project Untitled
 */


#ifndef _STATESINCOMBUSTIBLE_H
#define _STATESINCOMBUSTIBLE_H

#include "State.h"


class StateSinCombustible: public State {
	public: 
		StateSinCombustible(Vehiculo *vehiculo);	
		void acelerar();
		void frenar();	
		void contacto();
};

#endif //_STATESINCOMBUSTIBLE_H
