/*
 * FactoriaPrototipos.h
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#ifndef FACTORIAPROTOTIPOS_H_
#define FACTORIAPROTOTIPOS_H_

#include <map>
#include <string>
#include <memory>

#include "Figura.h"

enum TFiguras {CILINDRO, CIRCULO, ESFERA, TRIANGULO};

class FactoriaPrototipos {

	std::map<TFiguras, std::shared_ptr<Figura>> prototipos;
	void inicializarPrototipos();

public:
	FactoriaPrototipos();

	Figura * getPrototipo (TFiguras figura);

	virtual ~FactoriaPrototipos();
};

#endif /* FACTORIAPROTOTIPOS_H_ */
