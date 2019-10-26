#ifndef DETALLE_H
#define DETALLE_H

#include <string>
#include <vector>
using namespace std;

class Detalle
{
	string producto;
	int cantidad;
	double precio;
	
	string toString(int);
	string toString(double);
	
	public:
		Detalle();
		Detalle(string, int, double);
		vector<string> toListString();	
		inline double getTotal(){ return this->cantidad * this->precio; }
		~Detalle();
	protected:
};

#endif
