#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <string>
using namespace std;

enum COLORS { RED, BLUE, GREEN, BLACK, WHITE};

class FlyWeight
{
	string font;
	int size_;
	COLORS color;
	
	public:
		FlyWeight(string="Arial",int=12,COLORS=BLACK);
		bool operator==(const FlyWeight &);
		void imprimir();
		~FlyWeight();
	protected:
};

#endif
