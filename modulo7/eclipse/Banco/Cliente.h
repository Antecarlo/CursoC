/*
 * Cliente.h
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

#include <string>

class Cliente {

	std::string nombre;
	int telefono;

public:
	Cliente(std::string nombre="",int telefono=0);

	void imprimir();

	virtual ~Cliente();

	const std::string& getNombre() const {
		return nombre;
	}

	void setNombre(const std::string& nombre) {
		this->nombre = nombre;
	}

	int getTelefono() const {
		return telefono;
	}

	void setTelefono(int telefono) {
		this->telefono = telefono;
	}
};

#endif /* CLIENTE_H_ */
