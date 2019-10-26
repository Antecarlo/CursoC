/*
 * Figura3D.h
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#ifndef FIGURA3D_H_
#define FIGURA3D_H_

#include "Figura.h"
#include<string>


class Figura3D: public Figura {
public:
	Figura3D(std::string etiqueta="",std::string color="black");
	virtual ~Figura3D();
};

#endif /* FIGURA3D_H_ */
