/*
 * Programador.cpp
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#include "Programador.h"
#include "Empleado.h"
#include <iostream>
#include <string>

Programador::Programador() {
	// TODO Auto-generated constructor stub

}

Programador::Programador(std::string nombre, std::string apellidos, float peso,
		float altura, double sueldo, std::string empresa,
		std::string lenguajes) : Empleado(nombre,apellidos, peso, altura,sueldo,empresa) {

	this->lenguajes= lenguajes;
}

std::ostream & operator << (std::ostream & os, const Programador & p){
	return os << static_cast<Empleado>(p)<< std::endl << p.lenguajes;
}

void Programador::imprimir() {
	std::cout << * this << std::endl;
}

void Programador::subirSueldo(float porcentaje) {
	Empleado::subirSueldo(porcentaje);
}

Programador::~Programador() {
	// TODO Auto-generated destructor stub
}

void Programador::dormir() {
	Empleado::dormir();
	std::cout << "soy un programador" << std::endl;
}
