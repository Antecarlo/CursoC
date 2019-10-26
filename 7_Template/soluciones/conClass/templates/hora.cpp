#include "hora.h"
#include <iomanip>
#include <iostream>

using namespace std;

Hora::Hora(string hora)
{
	h=m=s=0;
}
Hora::Hora(long segundos)
{
	int resto;
	
	this->h = segundos / 3600;
	resto = segundos % 3600;
	this->m = resto / 60;
	this->s = resto % 60;
}

Hora::Hora(int h, int m, int s)
{
	this->h = h;
	this->m = m;
	this->s = s;
	
	this->ajustar();
}

ostream &operator<<(ostream &os, const Hora &hora)
{
	return os << setw(2) << setfill('0') << hora.h << ":" <<
			setw(2) << setfill('0') << hora.m << ":" <<
			setw(2) << setfill('0') << hora.s;
}

istream &operator>>(istream &is, Hora &hora)
{
	return is >> hora.h >> hora.m >> hora.s;
}

Hora Hora::operator+(const Hora &hora)
{
	return Hora(h+hora.h, m+hora.m, s+hora.s);
}
long Hora::segundos() const
{
	return h*3600+m*60+s;
}

Hora Hora::operator++()  
{
	// Prefijo.
	Hora sg1(0,0,1);
	
	*this = *this + sg1;
	return *this;
}

Hora Hora::operator++(int) 
{
	// Postfijo.
	Hora sg1(0,0,1);
	
	Hora aux = *this;
	*this = *this + sg1;
	return aux;
}

bool Hora::operator!()
{
	//return (this->segundos()!=0L);
	return !this->segundos();
}

bool Hora::operator>(const Hora &hora)
{
	return (this->segundos() > hora.segundos());
}

bool Hora::operator>=(const Hora &hora)
{
	return this->segundos() >= hora.segundos();
}

bool Hora::operator==(const Hora &hora)
{
	return this->segundos() == hora.segundos();
}

bool operator<(const Hora &h1, const Hora &h2)
{
	return h1.segundos() < h2.segundos();
}

Hora operator-(const Hora &h1, const Hora &h2)
{
	Hora aux;
	
	if (h1 < h2 )
		aux = Hora(24) + h1;
	else
		aux = h1;
		
	return Hora(aux.segundos()-h2.segundos());	 
}

void Hora::ajustar()
{
	
}

Hora::~Hora()
{
}
