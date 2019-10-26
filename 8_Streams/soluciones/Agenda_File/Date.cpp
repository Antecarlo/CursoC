// Date.cpp: implementation of the Date class.
//
//////////////////////////////////////////////////////////////////////

#include "Date.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;

Date::Date(){
	this->dd = this->mm = this->aa = 0;
}

Date::Date(string fecha){
	Utilidades::extraerInt(fecha, dd,mm,aa,string("/"));
}

Date::Date(int d, int m, int a) {
	if (!validar(d,m,a))
		throw "Fecha incorrecta";
	else {
		this->dd = d;
		this->mm = m;
		this->aa = a;
	}

}

bool operator<(const Date &d1, const Date &d2)
{
	return (d1.getDias() < d2.getDias());
}

long Date::getDias() const
{
	return this->aa*365 + this->dd + (this->mm-1) * 30;
}

ostream & operator<<(ostream &os, const Date &d)
{
	return os << setw(2) << setfill('0') << d.dd << "/" <<
				 setw(2) << setfill('0') << d.mm << "/" <<
				 setw(2) << setfill('0') << d.aa;
}

bool Date::validar(int d,int m,int y)
{
	int mes[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	//if (esBisiesto(y))
	//	mes[1]++;
		
	if (d < 1 || d > mes[m-1])
		return false;
	if (m < 1 || m > 12)
		return false;
		
	return true;
}

string Date::toString() const {
	char s[50];
	string fecha;

	sprintf(s, "%02d/%02d/%04d", dd, mm, aa);
	fecha = s;
	return fecha;
}


Date::~Date(){}
