#ifndef AGENDAFILE_H
#define AGENDAFILE_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "agenda.h"

class AgendaFile
{
	string nombreAgenda;
	
	public:
		AgendaFile(string="");
		void grabar(const Agenda &);
		inline void setNombre(string n){ nombreAgenda=n;}
		void leer(Agenda &);
		~AgendaFile();
	protected:
};

#endif
