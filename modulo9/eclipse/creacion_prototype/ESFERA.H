/*
 * Esfera.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef ESFERA_H_
#define ESFERA_H_

#include "Figura3D.h"
#include<string>


class Esfera: public Figura3D {

	double ratio;

public:
	Esfera(std::string etiqueta="",std::string color="black",double ratio=5.0);
	void dibujar();
	double volumen();
	virtual ~Esfera();
};


#endif /* ESFERA_H_ */
