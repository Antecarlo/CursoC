/*
 * Vector.h
 *
 *  Created on: 27 sept. 2019
 *      Author: antonio
 */

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector{

	int * numeros;
	int size;
	int cont;

public:
	Vector(int tama=10);

	//Constructor copia sobrecargado
	Vector(const Vector &v);

	//Operador= sobrecargado
	Vector & operator=(const Vector & v);

	void imprimir();

	bool add(int num);

	void set(int pos, int numero);

	virtual ~Vector();
};



#endif /* VECTOR_H_ */
