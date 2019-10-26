/*
 * Coche.h
 *
 *  Created on: 25 sept. 2019
 *      Author: antonio
 */

#ifndef COCHE_H_
#define COCHE_H_

#include <string>

class Coche {

	std::string marca;
	std::string modelo;
	std::string matricula;
	float cilindrada;
	int anyo;


public:
	Coche();
	Coche(std::string, std::string, std::string, float, int);

	void imprimir() const;
	void imprimir();

	virtual ~Coche();
};

#endif /* COCHE_H_ */
