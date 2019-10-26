#ifndef AGENDA_H
#define AGENDA_H

#include <map>
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

#include "Date.h"
#include "Hora.h"

class Agenda
{
	map<Date, map<Hora, string> > eventos;
	
	public:
		Agenda();
		void addEvento(Date, Hora, string);
		void addEvento(string);
		void listarDia(Date);
		void listarAgenda();
		bool getEvento(Date, Hora, string &);
		bool borrarDia(Date);
		bool borrarEvento(Date, Hora);
		string toCSV() const;
		~Agenda();
	protected:
};

#endif
