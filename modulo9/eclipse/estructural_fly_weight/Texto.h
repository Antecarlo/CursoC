/*
 * Texto.h
 *
 *  Created on: 17 oct. 2019
 *      Author: antonio
 */

#ifndef TEXTO_H_
#define TEXTO_H_

#include <vector>
#include "FactoriaFlyWeight.h"
#include "Caracter.h"
#include "Estilo.h"

class Texto {

	std::vector<Caracter> letras;
	FactoriaFlyWeight factoria;

public:
	Texto(FactoriaFlyWeight factoria);

	void imprimir();
	void addLetra(char letra, Estilo e);

	virtual ~Texto();

	const FactoriaFlyWeight& getFactoria() const {
		return factoria;
	}

	void setFactoria(const FactoriaFlyWeight& factoria) {
		this->factoria = factoria;
	}
};

#endif /* TEXTO_H_ */
