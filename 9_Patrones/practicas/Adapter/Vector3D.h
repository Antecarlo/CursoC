/*
 * Vector3D.h
 *
 *  Created on: 11/07/2009
 *      Author: Administrador
 */

#ifndef VECTOR3D_H_
#define VECTOR3D_H_

class Vector3D {
private:
	double x, y, z;

public:
	Vector3D(double, double, double);
	inline double getX() const { return x; }
	inline double getY() const { return y; }
	inline double getZ() const { return z; }
	double productoEscalar(const Vector3D &);
	double norma();
	virtual ~Vector3D();
};

#endif /* VECTOR3D_H_ */

