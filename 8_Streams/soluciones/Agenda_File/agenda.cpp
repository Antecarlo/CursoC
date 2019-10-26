#include "agenda.h"

Agenda::Agenda(){}

void Agenda::addEvento(Date f, Hora h, string e)
{
	this->eventos[f][h] = e;
}
void Agenda::listarDia(Date f)
{
	map<Date, map<Hora, string> >::iterator itFecha;
	map<Hora, string> eventosDia;
	map<Hora, string>::iterator itHoras;
	
	// Buscar si existe esa fecha:
	itFecha = this->eventos.find(f);
	if (itFecha == eventos.end())
		cout << "No hay eventos para " << f << endl;
	else {
		eventosDia = itFecha->second;// Captura el mapa de las horas.
		cout << "Eventos para el: " << f << endl;
		for (itHoras = eventosDia.begin() ; 
		    itHoras != eventosDia.end(); itHoras++)
			cout << "Hora: " << itHoras->first << " " 
			     << itHoras->second << endl;
	}
	
}
void Agenda::listarAgenda()
{
	map<Date, map<Hora, string> >::iterator itFecha;
	
	cout << "AGENDA COMPLETA"  << endl;
	for (itFecha = eventos.begin(); itFecha != eventos.end();itFecha++){
		this->listarDia(itFecha->first);
		cout << "-------------------------" << endl;
	}
}
bool Agenda::getEvento(Date f, Hora h, string &evento)
{
	try {
		evento = this->eventos.at(f).at(h);
		return true;
		
	} catch (out_of_range &e){
		evento = e.what();
		return false;		
	}
	
}
bool Agenda::borrarDia(Date f)
{
	map<Date, map<Hora, string> >::iterator it;
	
	// Buscar la clave con find:
	it = eventos.find(f);
	if (it == eventos.end())
		return false;
	else {
		eventos.erase(it);
		return true;
	}
	
}
bool Agenda::borrarEvento(Date f, Hora h)
{
	map<Date, map<Hora, string> >::iterator it;
	map<Hora, string>::iterator it2;
	
	// Buscar la clave con find:
	it = eventos.find(f);
	if (it != eventos.end()){
		it2 = it->second.find(h);
		
		if (it2 != it->second.end()){
			it->second.erase(it2);
			
			if (it->second.size()==0)
				// Borrar tambien el día porque no hay mas eventos
				this->borrarDia(f);
			
			return true;
				
		} else 
			return false;
				
	} else
		return false;
}

string Agenda::toCSV() const
{
	string resul="";
	string csv;
	map<Date, map<Hora, string> >::const_iterator it;
	map<Hora, string>::const_iterator it2;
	
	for (it = eventos.cbegin() ; it != eventos.cend(); it++)
		
		for (it2 = it->second.cbegin() ; it2 != it->second.cend();it2++){
			csv = it->first.toString()+ ";" +
			      it2->first.toString() + ";" +
			      it2->second+"\n";
			resul += csv;
		}
	return resul;
}

void Agenda::addEvento(string evento)
{
	// evento -> Date;Hora;string
	int pos;
	int rpos;
	string fecha, hora, event;
	
	pos = evento.find(";");
	rpos = evento.rfind(";");
	
	if (pos >= 0 && rpos >= 0){
		fecha = evento.substr(0, pos);
		hora = evento.substr(pos+1, rpos-1-pos);	
		event = evento.substr(rpos+1,evento.length()-rpos-1);
		/*
		cout << "Fecha: " << fecha << endl;
		cout << "Hora: " << hora << endl;
		cout << "Evento: " << event << endl;*/
		this->addEvento(Date(fecha),Hora(hora),event);
	}
	
}

Agenda::~Agenda()
{
}
