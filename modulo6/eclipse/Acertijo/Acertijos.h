/*
 * Acertijos.h
 *
 *  Created on: 8 oct. 2019
 *      Author: antonio
 */

#ifndef ACERTIJOS_H_
#define ACERTIJOS_H_

#include<string>

class Acertijos {

	std::string clave;
	void generarClave();

public:
	Acertijos();

	void consultarClave();
	void pedirVC();

	virtual ~Acertijos();
};

#endif /* ACERTIJOS_H_ */
