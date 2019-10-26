#ifndef RELOJ_H
#define RELOJ_H

#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

#include "Sujeto.h"

class Reloj : public Sujeto
{
	int hh,mm,ss;
	friend ostream &operator<<(ostream &os, const Reloj &);
	void retardo(int);
	
	public:
		Reloj();
		inline int getHh() {return hh;}
		inline int getMm() {return mm;}
		inline int getSs() {return ss;}
		string toString();
		void pulso();
		~Reloj();
	protected:
};

#endif
