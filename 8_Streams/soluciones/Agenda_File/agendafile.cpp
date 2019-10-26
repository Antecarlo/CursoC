#include "agendafile.h"

AgendaFile::AgendaFile(string nombre)		
{
	this->nombreAgenda = nombre;
}

void AgendaFile::grabar(const Agenda &ag)
{
	ofstream fich;
	string nombreFich = nombreAgenda+".txt";
	
	fich.open(nombreFich.c_str(), ios::out);
	fich << ag.toCSV();
	fich.close();
}

void AgendaFile::leer(Agenda &ag)
{
	ifstream fich;
	string linea;
	string nombreFich = nombreAgenda+".txt";
	
	fich.open(nombreFich.c_str(), ios::in);
	while (getline(fich, linea)){
		ag.addEvento(linea);
	}
	fich.close();
}

AgendaFile::~AgendaFile()
{
	
}
