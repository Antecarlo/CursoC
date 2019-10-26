/*
 * Movimiento.h
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#ifndef MOVIMIENTO_H_
#define MOVIMIENTO_H_

#include <string>
#include <iostream>

class Movimiento {

	//Fecha, hora, operacion y cantidad
	std::string fecha;
	std::string hora;
	std::string operacion;
	double importe;

public:
	Movimiento(std::string fecha="",std::string hora="",std::string operacion="",double importe=0.0);

	void imprimir();

	virtual ~Movimiento();
};

#endif /* MOVIMIENTO_H_ */
