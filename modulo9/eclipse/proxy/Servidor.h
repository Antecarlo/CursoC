/*
 * Servidor.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef SERVIDOR_H_
#define SERVIDOR_H_

#include "Operaciones.h"

class Servidor: public Operaciones {
public:
	Servidor();

	void descargarURL (std::string url);

	virtual ~Servidor();
};

#endif /* SERVIDOR_H_ */
