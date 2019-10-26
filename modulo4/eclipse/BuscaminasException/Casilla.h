/*
 * Casilla.h
 *
 *  Created on: 3 oct. 2019
 *      Author: antonio
 */

#ifndef CASILLA_H_
#define CASILLA_H_

#include "Coordenada.h"
#define BOMBA -1

class Casilla {

	Coordenada coor;
	bool abierta;
	int contador;

public:

	Casilla(Coordenada coor=Coordenada(), bool abierta=false, int contador=0);

	bool isBomba()const{return contador == BOMBA;}
	void setBomba(){this->setContador(BOMBA);//contador=BOMBA;
	}
	void vistaJuego();
	void vistaTraza();
	void abrir(){this->abierta=true;}

	Casilla operator++(); //Prefijo
	bool operator ==(const Casilla & c);

	bool isAbierta() const {
		return abierta;
	}

	void setAbierta(bool abierta) {
		this->abierta = abierta;
	}

	int getContador() const {
		return contador;
	}

	void setContador(int contador) {
		this->contador = contador;
	}

	const Coordenada& getCoor() const {
		return coor;
	}

	void setCoor(const Coordenada& coor) {
		this->coor = coor;
	}

	virtual ~Casilla();
};

#endif /* CASILLA_H_ */