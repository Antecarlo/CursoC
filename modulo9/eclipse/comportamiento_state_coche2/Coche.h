/*
 * Coche.h
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#ifndef COCHE_H_
#define COCHE_H_

class Coche;
#include "State.h"

#include <memory>

class Coche {

	std::shared_ptr<State> estadoActual;
	int combustible;
	int velocidad;

public:
	Coche(std::shared_ptr<State> inicio, int combustible=100, int velocidad=0);

	void acelerar();
	void frenar();
	void contacto();
	virtual ~Coche();

	int getCombustible() const {
		return combustible;
	}

	void setCombustible(int combustible) {
		this->combustible = combustible;
	}

	const std::shared_ptr<State>& getEstadoActual() const {
		return estadoActual;
	}

	void setEstadoActual(const std::shared_ptr<State>& estadoActual) {
		this->estadoActual = estadoActual;
	}

	int getVelocidad() const {
		return velocidad;
	}

	void setVelocidad(int velocidad) {
		this->velocidad = velocidad;
	}
};

#endif /* COCHE_H_ */
