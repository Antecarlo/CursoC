/*
 * Jugador.h
 *
 *  Created on: 3 oct. 2019
 *      Author: antonio
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include<string>
#include "Coordenada.h"

class Jugador {

	std::string alias;

public:
	Jugador(std::string alias="anonimo");
	Coordenada getCoordenada();
	virtual ~Jugador();

	const std::string& getAlias() const {
		return alias;
	}

	void setAlias(const std::string& alias) {
		this->alias = alias;
	}
};

#endif /* JUGADOR_H_ */
