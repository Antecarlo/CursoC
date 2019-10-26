/*
 * Vector2D.h
 *
 *  Created on: 11/07/2009
 *      Author: Administrador
 */

#ifndef VECTOR2D_H_
#define VECTOR2D_H_


class Vector2D { // Es una clase Abstracta.

public:
	Vector2D(){}
	virtual double getAbcisa() const =0; // eje x
	virtual double getOrdenada()const =0; // eje y
	virtual double prod(const Vector2D &)=0; // producto escalar
	virtual double magnitud()=0; // norma
	virtual ~Vector2D(){};
};
#endif /* VECTOR2D_H_ */
