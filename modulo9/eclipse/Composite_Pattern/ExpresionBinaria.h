/*
 * ExpresionBinaria.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef EXPRESIONBINARIA_H_
#define EXPRESIONBINARIA_H_

#include "Expresion.h"
#include "Expresion.h"

#include <memory>

class ExpresionBinaria: public Expresion {

protected:
	std::shared_ptr<Expresion> expresion1,expresion2;

public:
	ExpresionBinaria(std::shared_ptr<Expresion> expresion1,std::shared_ptr<Expresion> expresion2);
	virtual ~ExpresionBinaria();
};

#endif /* EXPRESIONBINARIA_H_ */
