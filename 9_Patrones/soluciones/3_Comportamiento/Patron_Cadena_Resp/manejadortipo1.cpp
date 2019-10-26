#include <iostream>
using namespace std;

#include "manejadortipo1.h"

ManejadorTipo1::ManejadorTipo1()
{
}

void ManejadorTipo1::manejarPeticion(Peticion p){
	if (p.getValue()<0)
		cout << "tipo1: " << p.getDescripcion() << " " << p.getValue() << endl;
		
	else
		sucesor->manejarPeticion(p);
	
}

ManejadorTipo1::~ManejadorTipo1()
{
}
