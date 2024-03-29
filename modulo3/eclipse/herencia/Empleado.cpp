/*
 * Empleado.cpp
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#include "Empleado.h"
#include<iostream>
#include<string>

Empleado::Empleado() {
	this->sueldo=0;
	this->empresa="";
}

Empleado::Empleado(std::string nombre, std::string apellidos, float peso,
		float altura, double sueldo, std::string empresa): Persona(nombre,apellidos, peso, altura) {
	this->sueldo=sueldo;
	this->empresa=empresa;
}

void Empleado::dormir() {

	// Llamar al metodo dormir de la clase padre:
	Persona::dormir();
	std::cout << std::endl << "Y soñar con proyectos" << std::endl;
}

std::ostream & operator << (std::ostream & os, const Empleado & e){

	//return os << (Persona) e << std::endl << e.empresa << std::endl << e.sueldo;

	//return os << static_cast<Persona>(e)<< std::endl << e.empresa << std::endl << e.sueldo;
	//return os << static_cast<Persona>(e)<< std::endl<< "NOMBRE: "<< e.getNombre()<< std::endl << e.empresa << std::endl << e.sueldo;
	return os << static_cast<Persona>(e)<< std::endl<< std::endl << e.empresa << std::endl << e.sueldo;
}

void Empleado::imprimir() {
	std::cout << * this << std::endl;
}

void Empleado::subirSueldo(float porcentaje) {
	this->sueldo *= (1+porcentaje/100.0);
}

Empleado::~Empleado() {
	// TODO Auto-generated destructor stub
}
