// Date.h: interface for the Date class.
//
//////////////////////////////////////////////////////////////////////

#ifndef DATE_H

#define DATE_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "utilidades.h"
using namespace std;

class Date  {

friend ostream & operator<<(ostream &, const Date &);
friend bool operator<(const Date &, const Date &);

private:
	int dd, mm, aa;

public:
	Date();
	Date(string);
	Date(int, int, int);
	string toString() const;
	long getDias() const;
	bool validar(int,int,int);
	virtual ~Date();

};

#endif 
