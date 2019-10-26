/*
 * Factura.h
 *
 *  Created on: 2 oct. 2019
 *      Author: antonio
 */

#ifndef FACTURA_H_
#define FACTURA_H_


#include <vector>
#include <iostream>
#include <memory>
#include <string>

#include "Evento.h"
#include "Cliente.h"
#include "Fecha.h"

class Factura {

	static long NUM_FACT;

	Fecha fecha;
	long numeroFact;
	Cliente cliente;
	double baseImp;
	float iva;

	std::vector<std::unique_ptr<Evento>> eventos;

public:
	Factura();
	Factura(Fecha f, Cliente c, float iva);

	void imprimir();
	double calcular();
	void addServicio(std::unique_ptr<Evento>);

	virtual ~Factura();
};


#endif /* FACTURA_H_ */
