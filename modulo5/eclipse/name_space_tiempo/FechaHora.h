/*
 * FechaHora.h
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#ifndef FECHAHORA_H_
#define FECHAHORA_H_

#include "Fecha.h"
#include "Hora.h"

namespace tiempo{

	class FechaHora;
	std::ostream & operator<<(std::ostream & os, const FechaHora & fechaHora);

	class FechaHora: public Hora, public Fecha {

		friend std::ostream & operator<<(std::ostream & os, const FechaHora & fechaHora);

	public:
		FechaHora(int horas, int minutos=0, int segundos=0,int d=1,int M=1,int y=1970);
		void imprimir() const;
		virtual ~FechaHora();
	};
}

#endif /* FECHAHORA_H_ */
