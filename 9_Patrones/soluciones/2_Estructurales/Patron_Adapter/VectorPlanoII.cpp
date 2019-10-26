/*
 * VectorPlanoII.cpp
 *
 *  Created on: 12/07/2009
 *      Author: Administrador
 */

#include "VectorPlanoII.h"

VectorPlanoII::VectorPlanoII(double a, double b):v3(a,b,0) {}

double VectorPlanoII::getAbcisa() const {
	return v3.getX();
}

double VectorPlanoII::getOrdenada() const {
	return v3.getY();
}

double VectorPlanoII::prod(const Vector2D &v2d){

	Vector3D v_3d(v2d.getAbcisa(), v2d.getOrdenada(), 0);
	Vector3D &ref = v_3d;
	return v3.productoEscalar(ref);
}

double VectorPlanoII::magnitud(){
	return v3.norma();
}

VectorPlanoII::~VectorPlanoII() {}
