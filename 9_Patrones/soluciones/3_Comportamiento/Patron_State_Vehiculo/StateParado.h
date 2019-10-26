/**
 * Project Untitled
 */


#ifndef _STATEPARADO_H
#define _STATEPARADO_H

#include "State.h"


class StateParado: public State {
	public: 
		StateParado(Vehiculo *vehiculo);		
		void acelerar();		
		void frenar();		
		void contacto();
};

#endif //_STATEPARADO_H
