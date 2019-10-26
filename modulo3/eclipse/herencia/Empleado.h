/*
 * Empleado.h
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#include "Persona.h"
#include<string>
#include<iostream>


class Empleado: public Persona {//El modificador public hay que ponerlo delante de cada clase

private:

	std::string empresa;
	friend std::ostream & operator << (std::ostream & os, const Empleado & e);

protected:

	double sueldo;

public:
	Empleado();
	Empleado(std::string nombre, std::string apellidos, float peso, float altura, double sueldo, std::string empresa);

	void dormir();
	void imprimir();


	virtual ~Empleado();

	const std::string& getEmpresa() const {
		return empresa;
	}

	void setEmpresa(const std::string& empresa) {
		this->empresa = empresa;
	}

	double getSueldo() const {
		return sueldo;
	}

	void setSueldo(double sueldo) {
		this->sueldo = sueldo;
	}

	void subirSueldo(float porcentaje);
};

#endif /* EMPLEADO_H_ */
