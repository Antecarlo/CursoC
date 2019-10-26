#include <iostream>
using namespace std;

#include "Vehiculo.h"

int main(){
	Vehiculo *vehiculo;
		
		vehiculo = new Vehiculo(50);
		vehiculo->acelerar();
		vehiculo->contacto();
		vehiculo->acelerar();
		vehiculo->acelerar();
		vehiculo->acelerar();
		vehiculo->acelerar();
		vehiculo->frenar();
		vehiculo->frenar();
		vehiculo->frenar();
		vehiculo->acelerar();
		vehiculo->acelerar();
		
		delete vehiculo;
}

