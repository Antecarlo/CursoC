/*
 * Caracter.h
 *
 *  Created on: 17 oct. 2019
 *      Author: antonio
 */

#ifndef CARACTER_H_
#define CARACTER_H_

class Caracter {

	char letra;
	int ptrEstilo;

public:
	Caracter(char letra, int codEstilo);
	void imprimir();

	char getLetra() const {
		return letra;
	}

	void setLetra(char letra) {
		this->letra = letra;
	}

	int getPtrEstilo() const {
		return ptrEstilo;
	}

	void setPtrEstilo(int ptrEstilo) {
		this->ptrEstilo = ptrEstilo;
	}

	virtual ~Caracter();
};

#endif /* CARACTER_H_ */