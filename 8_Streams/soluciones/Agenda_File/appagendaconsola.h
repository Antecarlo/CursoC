#ifndef APPAGENDACONSOLA_H
#define APPAGENDACONSOLA_H

#include "agenda.h"
#include "agendafile.h"

class AppAgendaConsola
{
	Agenda ag;
	AgendaFile agFile;
	
	void addEvento();
	void listarAgenda();
	
	public:
		AppAgendaConsola();
		void menu();
		~AppAgendaConsola();
	protected:
};

#endif
