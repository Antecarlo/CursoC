/*
 * Agenda.cpp
 *
 *  Created on: 4 oct. 2019
 *      Author: antonio
 */

#include "Agenda.h"

#define CONTADOR 0

Agenda::Agenda() {
	// TODO Auto-generated constructor stub

}

void Agenda::addEvento(Fecha fecha, Hora hora, std::string evento) {
	this->mapaAgenda[fecha];
	this->mapaAgenda.at(fecha).insert(std::pair<Hora,std::string>(hora,evento));
}

Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}

