/**
 * Project Untitled
 */


#ifndef _STATEENMARCHA_H
#define _STATEENMARCHA_H

#include "State.h"


class StateEnMarcha: public State {
	public: 
		StateEnMarcha(Vehiculo *vehiculo);
		void acelerar();
		void frenar();
		void contacto();

	private: 
		static const int VELOCIDAD_MAX = 200;
};

#endif //_STATEENMARCHA_H
