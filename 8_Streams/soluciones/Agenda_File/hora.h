#ifndef HORA_H
#define HORA_H

#include <iostream>
#include <iomanip>

#include "utilidades.h"
using namespace std;

class Hora
{
		int hh, mm, ss;
		void ajustar();
		
		friend Hora operator-(const Hora &, const Hora &);
		friend bool operator<(const Hora &, const Hora &);
		friend ostream &operator<<(ostream &, const Hora &);
		friend istream &operator>>(istream &, Hora &);
		friend bool operator==(const Hora &,const Hora &);
	public:
		//Hora();
		Hora(int=0, int=0, int=0);
		Hora(string);
		inline void setHH(int hh){ this->hh=hh;}
		inline void setMM(int mm){ this->mm=mm;}
		inline void setSS(int ss){ this->ss=ss;}
		// Define un metodo para objeto constantes.
		inline int getHH() const { return hh; }
		//inline int getHH(){ return hh; }
		inline int getMM(){ return mm; }
		inline int getSS(){ return ss; }
		Hora operator+(const Hora &);
		
		Hora operator++(); 		// Pre
		Hora operator++(int); 	// Post
		void imprimir() const;
		int segundos() const;
		string toString() const;
		~Hora();
	protected:
};

#endif
