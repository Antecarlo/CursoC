#include <iostream>
using namespace std;

#include "manejadortipo2.h"

ManejadorTipo2::ManejadorTipo2()
{
}

void ManejadorTipo2::manejarPeticion(Peticion p){
	if (p.getValue()>=0)
		cout << "Tipo2: " << p.getDescripcion() << " " << p.getValue() << endl;
		
	else
		sucesor->manejarPeticion(p);
	
}

ManejadorTipo2::~ManejadorTipo2()
{
}
