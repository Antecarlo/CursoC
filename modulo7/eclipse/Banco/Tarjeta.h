/*
 * Tarjeta.h
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#ifndef TARJETA_H_
#define TARJETA_H_

class Tarjeta {

	int numero;
	int pin;

public:
	Tarjeta(int numero=0, int pin=0);

	bool operator==(const Tarjeta &t);
	void imprimir();

	virtual ~Tarjeta();
};

#endif /* TARJETA_H_ */
