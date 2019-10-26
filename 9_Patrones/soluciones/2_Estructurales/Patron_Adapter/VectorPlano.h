/*
 * VectorPlano.h
 *
 *  Created on: 12/07/2009
 *      Author: Administrador
 */

#ifndef VECTORPLANO_H_
#define VECTORPLANO_H_

#include "Vector2D.h"
#include "Vector3D.h"

class VectorPlano : public Vector2D, private Vector3D {

public:
	VectorPlano(double a = 0, double b = 0);
	double getAbcisa() const;
	double getOrdenada() const;
	double prod(const Vector2D &);
	double magnitud();
	virtual ~VectorPlano();
};

#endif /* VECTORPLANO_H_ */
