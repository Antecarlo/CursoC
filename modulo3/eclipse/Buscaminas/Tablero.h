/*
 * Tablero.h
 *
 *  Created on: 3 oct. 2019
 *      Author: antonio
 */

#ifndef TABLERO_H_
#define TABLERO_H_

#include<vector>
#include "Casilla.h"
#include "Coordenada.h"
#define BOMBA -1

class Tablero {

private:
	int n, numBombas;
	std::vector<std::vector<Casilla>> tablero;

	void construirTablero();
	void colocarBombas();
	void calcularContador(std::vector<Coordenada> adyacentes);
	Casilla & getCasilla(Coordenada c);

public:
	Tablero(int n=10, int numBombas=5);

	void vistaJuego();
	void vistaTraza();
	bool abrirCasilla(Coordenada c);
	void abrirCeros(Casilla & casilla);
	void abrirBombas();
	void buscarAbrirBombas();

	virtual ~Tablero();
};

#endif /* TABLERO_H_ */
