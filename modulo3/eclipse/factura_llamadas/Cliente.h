/*
 * Cliente.h
 *
 *  Created on: 2 oct. 2019
 *      Author: antonio
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

#include <iostream>
#include "Tarifa.h"


class Cliente {

	friend	std::ostream & operator <<(std::ostream & os, const Cliente & c);

	std::string nombre;
	std::string apellidos;
	long numero;
	Tarifa tarifa;

public:
	Cliente();
	Cliente(Tarifa tarifa,std::string nombre="",std::string apellidos="",long numero=0);
	virtual ~Cliente();

	const std::string& getApellidos() const {
		return apellidos;
	}

	void setApellidos(const std::string& apellidos) {
		this->apellidos = apellidos;
	}

	const std::string& getNombre() const {
		return nombre;
	}

	void setNombre(const std::string& nombre) {
		this->nombre = nombre;
	}

	long getNumero() const {
		return numero;
	}

	void setNumero(long numero) {
		this->numero = numero;
	}

	const Tarifa& getTarifa() const {
		return tarifa;
	}

	void setTarifa(const Tarifa& tarifa) {
		this->tarifa = tarifa;
	}
};


#endif /* CLIENTE_H_ */
