/**
 * Project Untitled
 */


#ifndef _IMEDIADOR_H
#define _IMEDIADOR_H

class IMediador;
#include "Colega.h"
#include <string>
using namespace std;

class IMediador {
public: 
	

virtual void enviar(string mensaje, Colega *emisor) = 0;
};

#endif //_IMEDIADOR_H
