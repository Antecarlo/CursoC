/*
 * JefeProyecto.h
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#ifndef JEFEPROYECTO_H_
#define JEFEPROYECTO_H_

#include "Empleado.h"


class JefeProyecto: public Empleado {

	std::string proyectos;
	friend std::ostream & operator << (std::ostream & os, const JefeProyecto & p);

public:
	JefeProyecto();

	JefeProyecto(std::string nombre, std::string apellidos, float peso, float altura, double sueldo, std::string empresa, std::string proyectos);
	void subirSueldo (float porcentaje, float incentivos);

	virtual ~JefeProyecto();
};

#endif /* JEFEPROYECTO_H_ */
