#include "flyweightfactory.h"

FlyWeightFactory::FlyWeightFactory(){
}


FlyWeight *FlyWeightFactory::look(string f,int s,COLORS c)
{
	FlyWeight aux(f,s,c);
	FlyWeight *nuevo;
	
	for (auto fly : propiedades){
		if (*fly == aux)
			return fly;			
	}
	// No existe, se crea nuevo:
	nuevo = new FlyWeight(aux);
	propiedades.push_back(nuevo);
	return nuevo;
}

FlyWeightFactory::~FlyWeightFactory()
{
	for (auto fly : propiedades)
		delete fly;
}
