#include "hora.h"
/*
Hora::Hora()
{
	hh=mm=ss=0;
}*/

/*
Hora::Hora(int hh, int mm, int ss)
{
	this->hh = hh;
	this->mm = mm;
	this->ss = ss;
}*/

// Constructor con lista de iniciadores:
Hora::Hora(int hora, int minutos, int segundos):
	hh(hora), mm(minutos), ss(segundos)
{	
	this->ajustar();
}

Hora::Hora(string hora){
	Utilidades::extraerInt(hora, hh,mm,ss,string(":"));
	this->ajustar();
}

Hora operator-(const Hora &h1, const Hora &h2)
{
	int  dif;
	dif = h1.segundos()-h2.segundos();
	return Hora (0,0,dif);
}
void Hora::ajustar()
{
	int minutos;
	minutos = ss / 60;
	ss %= 60;
	mm += minutos;
	
	int horas;
	horas = mm / 60;
	mm %= 60;
	hh += horas;
		
}

bool operator==(const Hora &hora1,const Hora &hora2)
{
	return hora1.segundos()==hora2.segundos();
}

bool operator<(const Hora &h1, const Hora &h2)
{
	return h1.segundos() < h2.segundos();
}

istream &operator>>(istream &is, Hora &hora)
{
	is >> hora.hh >> hora.mm >> hora.ss;
	hora.ajustar();
	return is;
}


Hora Hora::operator++()
{
	// Pre
	//*this = Hora(0,0,this->segundos()+1);
	//return *this;
	
	//  otra opcion
	this->ss++;
	this->ajustar();
	return *this;
}
		
Hora Hora::operator++(int)
{
	// Post
	Hora aux = *this;
	this->ss++;
	this->ajustar();
	return aux;
} 	

ostream &operator<<(ostream &os, const Hora &hora)
{
	return os << setw(2) << setfill('0') << hora.hh 
	<< ":"   << setw(2) << setfill('0') << hora.mm 
	<< ":"   << setw(2) << setfill('0') << hora.ss;
}

int Hora::segundos() const {
	return hh*3600 + mm*60 + ss;
}

Hora Hora::operator+(const Hora &hora)
{
	return Hora(this->hh+hora.hh,
	            this->mm+hora.mm,
	            this->ss+hora.ss);
}

void Hora::imprimir() const
{
	cout << setw(2) << setfill('0') << hh << ":"  
		 << setw(2) << setfill('0') << mm << ":"  
		 << setw(2) << setfill('0') << ss 
		 << endl;
}

string Hora::toString() const 
{
	char s[20];
	sprintf(s,"%02d:%02d:%02d",hh,mm,ss);
	return string(s);
}

/*
void Hora::imprimir()
{
	cout << setw(2) << setfill('0') << hh << ":"  
		 << setw(2) << setfill('0') << mm << ":"  
		 << setw(2) << setfill('0') << ss 
		 << endl;
}
*/

Hora::~Hora()
{
}
