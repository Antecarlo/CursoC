/*
 * Expresion.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef EXPRESION_H_
#define EXPRESION_H_

#include <string>

class Expresion {
public:
	Expresion();

	virtual std::string to_string()=0;
	virtual double getValue()=0;

	virtual ~Expresion();
};

#endif /* EXPRESION_H_ */
