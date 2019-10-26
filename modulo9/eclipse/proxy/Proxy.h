/*
 * Proxy.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef PROXY_H_
#define PROXY_H_

#include "Operaciones.h"
#include "Servidor.h"

#include <memory>

class Proxy: public Operaciones {

	bool checkURL(std::string url);
	//Servidor servidor;
	std::unique_ptr<Operaciones> servidor;

public:
	Proxy(std::unique_ptr<Operaciones> servidor);

	void descargarURL(std::string url);

	virtual ~Proxy();
};

#endif /* PROXY_H_ */
