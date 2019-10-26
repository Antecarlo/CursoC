/*
 * Banco.h
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#ifndef BANCO_H_
#define BANCO_H_

#include <string>
#include <map>

#include "Cuenta.h"

class Banco {

	std::string nombre;
	std::map<int,Cuenta> cuentas;

public:
	Banco(std::string nombre="");

	Cuenta getCuenta(int numero);
	void addCuenta(Cuenta cuenta);
	void listarCuentas();

	virtual ~Banco();
};

#endif /* BANCO_H_ */
