/*
 * OperacionesIO.h
 *
 *  Created on: 15 oct. 2019
 *      Author: antonio
 */

#ifndef OPERACIONESIO_H_
#define OPERACIONESIO_H_

#include <map>
#include "Cuenta.h"

class OperacionesIO {
public:
	OperacionesIO();

	void cargarCuentas(std::map<int,Cuenta> & cuentas);
	void grabarCuenta(const Cuenta & cuenta);
	Cuenta buscarTarjetaIO(Tarjeta tarjeta);

	virtual ~OperacionesIO();
};

#endif /* OPERACIONESIO_H_ */
