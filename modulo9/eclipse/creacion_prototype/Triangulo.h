/*
 * triangulo.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "Figura2D.h"

class Triangulo: public Figura2D {
	double base;
	double altura;
public:
	Triangulo(std::string etiqueta="",std::string color="black", double base=2, double altura=1.5);
	double area();
	void dibujar();
	virtual ~Triangulo();
};

#endif /* TRIANGULO_H_ */
