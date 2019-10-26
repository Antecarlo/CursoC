#ifndef HORA_H
#define HORA_H

#include <iostream>
#include <string>
using namespace std;

class Hora
{
	friend Hora operator-(const Hora &, const Hora &);
	friend bool operator<(const Hora &, const Hora &);
	friend ostream & operator<<(ostream &, const Hora &);
	friend istream & operator>>(istream &, Hora &);
		
	private:
		int h,m,s;
		void ajustar();
		
	public:
		Hora(string);
		Hora(long);
		Hora(int =0,int =0, int=0);
		long segundos() const;
		Hora operator+(const Hora &);
		bool operator>(const Hora &);
		bool operator==(const Hora &);
		bool operator>=(const Hora &);		
		bool operator!();
		Hora operator++(); 	  // Prefijo
		Hora operator++(int); // Postfijo	
		~Hora();
	protected:
};

#endif
