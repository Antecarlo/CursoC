/*
 * JefeProyecto.cpp
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#include "JefeProyecto.h"
#include "Empleado.h"



JefeProyecto::JefeProyecto() {
	// TODO Auto-generated constructor stub

}

JefeProyecto::JefeProyecto(std::string nombre, std::string apellidos,
		float peso, float altura, double sueldo, std::string empresa,
		std::string proyectos) : Empleado(nombre,apellidos,peso,altura,sueldo,empresa){

	this->proyectos=proyectos;
}

std::ostream & operator << (std::ostream & os, const JefeProyecto & jp){
	return os << static_cast<Empleado>(jp)<< std::endl << jp.proyectos;
}

void JefeProyecto::JefeProyecto::subirSueldo(float porcentaje,
		float incentivos) {
	Empleado::subirSueldo(porcentaje);
	this->sueldo+=incentivos;
}

JefeProyecto::~JefeProyecto() {
	// TODO Auto-generated destructor stub
}
