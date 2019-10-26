#ifndef PLANTILLA_H
#define PLANTILLA_H

#include <iostream>
using namespace std;

template <typename T, typename R, typename S>
class Plantilla
{
	T t;
	R r;
	S s;
	
	public:
		Plantilla(T, R, S);

		inline T getT(){ return t; }
		inline R getR(){ return r; }
		inline S getS(){ return s; }

		inline T setT(T t){ this->t = t; }
		inline R setR(R r){ this->r = r; }
		inline S setT(S s){ this->s = s; }
		
		void print();
		
		~Plantilla();
	protected:
};

#endif
