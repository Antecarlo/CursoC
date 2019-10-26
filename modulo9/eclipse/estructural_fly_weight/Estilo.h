/*
 * Estilo.h
 *
 *  Created on: 17 oct. 2019
 *      Author: antonio
 */

#ifndef ESTILO_H_
#define ESTILO_H_

#include <string>
#include "Tipos.h"

class Estilo {

	bool negrita;
	TLetra tipoletra;
	int size;
	TColor color;

public:
	Estilo(bool negrita=false,TLetra tletra=CALIBRI, int size=12,TColor color =BLACK);

	int getCodigo() const;
	void imprimir() const;
	static Estilo getEstilo(int codigo);
	static Estilo estiloAleatorio();

	virtual ~Estilo();

	bool isNegrita() const {
		return negrita;
	}

	void setNegrita(bool negrita) {
		this->negrita = negrita;
	}

	int getSize() const {
		return size;
	}

	void setSize(int size) {
		this->size = size;
	}

	TColor getColor() const {
		return color;
	}

	void setColor(TColor color) {
		this->color = color;
	}

	TLetra getTipoletra() const {
		return tipoletra;
	}

	void setTipoletra(TLetra tipoletra) {
		this->tipoletra = tipoletra;
	}
};

#endif /* ESTILO_H_ */