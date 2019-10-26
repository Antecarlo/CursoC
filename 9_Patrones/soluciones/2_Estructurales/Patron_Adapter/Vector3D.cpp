/*
 * Vector3D.cpp
 *
 *  Created on: 11/07/2009
 *      Author: Administrador
 */

#include "Vector3D.h"
#include <cmath>
using namespace std;

Vector3D::Vector3D(double x, double y, double z) {
	// TODO Auto-generated constructor stub
	this->x = x;
	this->y = y;
	this->z = z;
}

double Vector3D::productoEscalar(const Vector3D &v) {
	return this->x*v.getX() + this->y*v.getY() + this->z*v.getZ();
}

double Vector3D::norma() {
	return sqrt(x*x + y*y + z*z);
}

Vector3D::~Vector3D() {
	// TODO Auto-generated destructor stub
}
