/*
 * Numero.h
 *
 *  Created on: 26 sept. 2019
 *      Author: antonio
 */

#ifndef NUMERO_H_
#define NUMERO_H_

class Numero {
	//Atributos
	int numero;

public:
	Numero(int=0); //parametro opcional

	bool esPar();
	bool esImpar();

	virtual ~Numero();
};

#endif /* NUMERO_H_ */
