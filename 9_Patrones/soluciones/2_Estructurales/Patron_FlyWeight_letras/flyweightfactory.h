#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H

#include <vector>
using namespace std;

#include "flyweight.h"

class FlyWeightFactory
{
	vector<FlyWeight *> propiedades;
	
	public:
		FlyWeightFactory();
		FlyWeight *look(string,int,COLORS);
		inline int getNumEstilos(){ return propiedades.size();}
		~FlyWeightFactory();
	protected:
};

#endif
