/*
 * Movimiento.cpp
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#include "Movimiento.h"

Movimiento::Movimiento(std::string fecha, std::string hora,
		std::string operacion, double importe): fecha(fecha), hora(hora), operacion (operacion), importe (importe) {
}

void Movimiento::imprimir() {
	std::cout << fecha << " " << hora << " " << operacion << " "<< importe << std::endl;
}

Movimiento::~Movimiento() {
	// TODO Auto-generated destructor stub
}
