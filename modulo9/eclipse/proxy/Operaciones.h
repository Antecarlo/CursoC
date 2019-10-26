/*
 * Operaciones.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_

#include <string>

class Operaciones {
public:
	Operaciones();

	virtual void descargarURL (std::string url)=0;

	virtual ~Operaciones();
};

#endif /* OPERACIONES_H_ */
