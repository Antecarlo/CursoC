/*
 * Vector.cpp
 *
 *  Created on: 27 sept. 2019
 *      Author: antonio
 */

#include "Vector.h"
#include <iostream>


Vector::Vector(int tama) {
	this->size=tama;
	this->numeros=new int[tama];
	this->cont=0; //Posicion libre que tenemos
}

void Vector::imprimir() {
	for(int i=0;i<this->cont;i++){
		std::cout << i <<": "<<this->numeros[i] << std::endl;
		std::cout << std::endl;
	}
}

bool Vector::add(int num) {
	if(this->cont<this->size){
		this->numeros[this->cont]=num;
		this->cont++;
		return true;
	}else{
		//std::cout << "El numero no se puede añadir" << std::endl;
		return false;
	}
}

Vector::Vector(const Vector& v) {
	this->size=v.size;
	this->cont=v.cont;
	this->numeros=new int[v.size];

	for(int i=0;i<this->cont;i++){
		this->numeros[i]=v.numeros[i];
	}
}

Vector & Vector::operator =(const Vector& v){

	if(this->size != v.size){
		delete [] this->numeros;
		this->size=v.size;
		this->numeros=new int[v.size];
	}
	this->cont=v.cont;
			for(int i=0;i<this->cont;i++){
				this->numeros[i]=v.numeros[i];
			}
	return * this;
}

Vector::~Vector() {
	delete [] this->numeros;
}


void Vector::set(int pos, int numero) {
	if(pos<this->cont && pos>=0)
		this->numeros[pos]=numero;
	else
		std::cout << "La posicion no es accesible" << std::endl;
}
