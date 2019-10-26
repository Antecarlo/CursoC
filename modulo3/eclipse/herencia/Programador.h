/*
 * Programador.h
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#ifndef PROGRAMADOR_H_
#define PROGRAMADOR_H_

#include "Empleado.h"

class Programador: public Empleado {

	std::string lenguajes;
	friend std::ostream & operator << (std::ostream & os, const Programador & p);

public:
	Programador();


	Programador(std::string nombre, std::string apellidos, float peso, float altura, double sueldo, std::string empresa, std::string lenguajes);
	void subirSueldo (float porcentaje);
	void dormir();
	void imprimir();

	virtual ~Programador();
};

#endif /* PROGRAMADOR_H_ */
