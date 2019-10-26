/*
 * Vector.h
 *
 *  Created on: 27 sept. 2019
 *      Author: antonio
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include<iostream>

template <class T> class Vector{

	T * conjunto;
	int size;
	int cont;

public:

	Vector(int tama=10);

	//Constructor copia sobrecargado
	Vector(const Vector<T> &v);

	//Operador= sobrecargado
	Vector<T> & operator=(const Vector<T> & v);

	void imprimir();

	bool add(T elemento);

	void set(int pos, T elemento);

	virtual ~Vector();
};

///////////////////////// CPP ////////////////////////////

template<class T> Vector<T>::Vector(int tama) {
	this->size=tama;
	this->conjunto=new T[tama];
	this->cont=0; //Posicion libre que tenemos
}

template<class T> void Vector<T>::imprimir() {
	for(int i=0;i<this->cont;i++){
		std::cout << i <<": "<<this->conjunto[i] << std::endl;
		std::cout << std::endl;
	}
}

template<class T> bool Vector<T>::add(T elemento) {
	if(this->cont<this->size){
		this->conjunto[this->cont]=elemento;
		this->cont++;
		return true;
	}else{
		//std::cout << "El numero no se puede añadir" << std::endl;
		return false;
	}
}

template<class T> Vector<T>::Vector(const Vector<T> & v) {
	this->size=v.size;
	this->cont=v.cont;
	this->conjunto=new int[v.size];

	for(int i=0;i<this->cont;i++){
		this->conjunto[i]=v.conjunto[i];
	}
}

template<class T> Vector<T> & Vector<T>::operator =(const Vector<T> & v){

	if(this->size != v.size){
		delete [] this->conjunto;
		this->size=v.size;
		this->conjunto=new int[v.size];
	}
	this->cont=v.cont;
			for(int i=0;i<this->cont;i++){
				this->conjunto[i]=v.conjunto[i];
			}
	return * this;
}

template<class T> Vector<T>::~Vector() {
	delete [] this->conjunto;
}

template<class T> void Vector<T>::set(int pos, T elemento) {
	if(pos<this->cont && pos>=0)
		this->conjunto[pos]=elemento;
	else
		std::cout << "La posicion no es accesible" << std::endl;
}



#endif /* VECTOR_H_ */
