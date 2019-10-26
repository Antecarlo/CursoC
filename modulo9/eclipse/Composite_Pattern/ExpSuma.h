/*
 * ExpSuma.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef EXPSUMA_H_
#define EXPSUMA_H_

#include "ExpresionBinaria.h"

class ExpSuma: public ExpresionBinaria {

public:
	ExpSuma(std::shared_ptr<Expresion> expresion1,std::shared_ptr<Expresion> expresion2);

	std::string to_string();
	double getValue();

	virtual ~ExpSuma();
};

#endif /* EXPSUMA_H_ */
