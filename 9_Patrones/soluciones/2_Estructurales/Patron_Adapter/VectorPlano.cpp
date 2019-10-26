/*
 * VectorPlano.cpp
 *
 *  Created on: 12/07/2009
 *      Author: Administrador
 */

#include "VectorPlano.h"
#include "Vector2D.h"
#include "Vector3D.h"

VectorPlano::VectorPlano(double a, double b) : Vector3D(a, b, 0) {}

double VectorPlano::getAbcisa() const {
	return getX();
}

double VectorPlano::getOrdenada() const {
	return getY();
}

double VectorPlano::prod(const Vector2D &v) {
	Vector3D v_3d(v.getAbcisa(), v.getOrdenada(), 0);
	Vector3D &ref = v_3d;

	return productoEscalar(ref);
}

double VectorPlano::magnitud() {
	return norma();
}

VectorPlano::~VectorPlano(){}
