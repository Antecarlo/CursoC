/*
 * VectorPlanoII.h
 *
 *  Created on: 12/07/2009
 *      Author: Administrador
 */

#ifndef VECTORPLANOII_H_
#define VECTORPLANOII_H_

#include "Vector3D.h"
#include "Vector2D.h"

class VectorPlanoII : public Vector2D {

private:
	Vector3D v3; // Como Vector3D no tiene constructor por defecto, se hace la llamada con iniciadores.

public:
	VectorPlanoII(double a = 0, double b = 0);
	double getAbcisa() const;
	double getOrdenada() const;
	double prod(const Vector2D &);
	double magnitud();
	virtual ~VectorPlanoII();
};

#endif /* VECTORPLANOII_H_ */
