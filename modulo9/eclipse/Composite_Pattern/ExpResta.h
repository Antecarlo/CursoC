/*
 * ExpResta.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef EXPRESTA_H_
#define EXPRESTA_H_

#include "ExpresionBinaria.h"

class ExpResta: public ExpresionBinaria {


public:
	ExpResta(std::shared_ptr<Expresion> expresion1,std::shared_ptr<Expresion> expresion2);

	std::string to_string();
	double getValue();

	virtual ~ExpResta();
};

#endif /* EXPRESTA_H_ */
