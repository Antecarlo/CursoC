/*
 * Fichero.h
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#ifndef FICHERO_H_
#define FICHERO_H_

#include <string>
#include <vector>

class Fichero {

	std::string nombre;
	std::vector<std::vector<std::string>> tabla;

public:
	Fichero(std::string nombre);

	void leerTabla();
	void cargaTabla();
	std::string getNombre();
	void escribirTabla();

	virtual ~Fichero();
};

#endif /* FICHERO_H_ */
