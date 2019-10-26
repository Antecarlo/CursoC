/*
 * Persona.cpp
 *
 *  Created on: 25 sept. 2019
 *      Author: antonio
 */

#include "Persona.h"
#include<iostream>

Persona::Persona() {
	// TODO Auto-generated constructor stub
	nombre="";
	apellidos="";
	peso=0.0;
	altura=0.0;
}

Persona::Persona(std::string nombre, std::string apellidos, float peso, float altura) {
	this->nombre = nombre;
	this->apellidos=apellidos;
	this->altura=altura;
	this->peso=peso;
}

Persona::~Persona() {
	// TODO Auto-generated destructor stub
}

void Persona::dormir(){
	std::cout<< nombre <<" esta durmiendo ..."<< std::endl;

}

void Persona::hablar(Persona p){
	std::cout<< nombre <<" y "<<p.nombre<< " estan hablando."<< std::endl;

}

std::ostream & operator <<(std::ostream & os, const Persona & p){
	return os << p.nombre << std::endl << p.apellidos << std::endl << p.peso << std::endl << p.altura;
}

void Persona::imprimir() {
	std::cout << * this << std::endl;
}
