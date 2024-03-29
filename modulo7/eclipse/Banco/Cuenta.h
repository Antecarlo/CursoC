/*
 * Cuenta.h
 *
 *  Created on: 11 oct. 2019
 *      Author: antonio
 */

#ifndef CUENTA_H_
#define CUENTA_H_

#include <vector>

#include "Cliente.h"
#include "Movimiento.h"
#include "Tarjeta.h"

class Cuenta {

	int numero;
	Cliente cliente;
	Tarjeta tarjeta;
	std::vector<Movimiento> movimientos;
	double saldo;

public:
	Cuenta();
	Cuenta(int numero,Cliente cliente, double saldo=0.0);

	void addMovimiento(Movimiento mov);
	void imprimir();

	virtual ~Cuenta();

	const Cliente& getCliente() const {
		return cliente;
	}

	void setCliente(const Cliente& cliente) {
		this->cliente = cliente;
	}

	const std::vector<Movimiento>& getMovimientos() const {
		return movimientos;
	}

	void setMovimientos(const std::vector<Movimiento>& movimientos) {
		this->movimientos = movimientos;
	}

	double getSaldo() const {
		return saldo;
	}

	void setSaldo(double saldo) {
		this->saldo = saldo;
	}

	const Tarjeta& getTarjeta() const {
		return tarjeta;
	}

	void setTarjeta(const Tarjeta& tarjeta) {
		this->tarjeta = tarjeta;
	}

	int getNumero() const {
		return numero;
	}

	void setNumero(int numero) {
		this->numero = numero;
	}
};

#endif /* CUENTA_H_ */
