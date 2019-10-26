/*
 * Peticion.h
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#ifndef PETICION_H_
#define PETICION_H_

#include <string>

enum TiposPeticion {SMS, EMAIL, WHATSAPP};

class Peticion {

	TiposPeticion tipo;
	std::string contenido;

public:
	Peticion(TiposPeticion tipo, std::string contenido);

	std::string getContenido()const;

	virtual ~Peticion();

	TiposPeticion getTipo() const {
		return tipo;
	}
};

#endif /* PETICION_H_ */
