/*
 * ExpresionNumerica.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef EXPRESIONNUMERICA_H_
#define EXPRESIONNUMERICA_H_

#include "Expresion.h"
#include <string>

class ExpresionNumerica: public Expresion {

	double valor;

public:
	ExpresionNumerica(double valor);

	double getValue();
	std::string to_string();

	virtual ~ExpresionNumerica();
};

#endif /* EXPRESIONNUMERICA_H_ */
