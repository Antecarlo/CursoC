/*
 * ExpresionNumerica.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include "ExpresionNumerica.h"

ExpresionNumerica::ExpresionNumerica(double valor):valor(valor) {
	// TODO Auto-generated constructor stub

}

std::string ExpresionNumerica::to_string() {
	return std::to_string(this->valor);
}

double ExpresionNumerica::getValue() {
	return this->valor;
}

ExpresionNumerica::~ExpresionNumerica() {
	// TODO Auto-generated destructor stub
}
