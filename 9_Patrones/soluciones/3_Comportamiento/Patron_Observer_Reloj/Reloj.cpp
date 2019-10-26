#include "Reloj.h"

Reloj::Reloj()
{
}

ostream &operator<<(ostream &os, const Reloj &r)
{
	return os << r.hh << ":" << r.mm << ":" << r.ss;
}

string Reloj::toString()
{
	char s[100];
	sprintf(s, "%02d:%02d:%02d", this->hh, this->mm, this->ss);	
	return string(s);
}

void Reloj::pulso()
{
  time_t rawtime;
  struct tm *timeinfo;

	while (true)
	{
		time ( &rawtime );
	  	timeinfo = localtime ( &rawtime );
	  	this->hh = timeinfo->tm_hour;
	  	this->mm = timeinfo->tm_min;
	  	this->ss = timeinfo->tm_sec;
	  
	  	this->notificar();		
		this->retardo(1);  	
	}
}

void Reloj::retardo(int segundos){
	sleep(segundos);	
}


Reloj::~Reloj()
{
}
