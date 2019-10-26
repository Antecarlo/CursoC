/*
 * AgendaException.cpp
 *
 *  Created on: 7 oct. 2019
 *      Author: antonio
 */

#include "AgendaException.h"

AgendaException::AgendaException(std::string mensaje) {
this->mensaje=mensaje;

}

const char* AgendaException::what() const throw () {
	return this->mensaje.c_str();
}

AgendaException::~AgendaException() {
	// TODO Auto-generated destructor stub
}
