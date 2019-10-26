/*
 * ServidorDedicado.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef SERVIDORDEDICADO_H_
#define SERVIDORDEDICADO_H_

#include "Operaciones.h"
#include <iostream>
#include <string>

class ServidorDedicado: public Operaciones {
public:
	ServidorDedicado();

	void descargarURL(std::string url);

	virtual ~ServidorDedicado();
};

#endif /* SERVIDORDEDICADO_H_ */
