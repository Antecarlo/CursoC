/*
 * main.cpp
 *
 *  Created on: 1 oct. 2019
 *      Author: antonio
 */

#include "FechaHora.h"
#include "Fecha.h"
#include "Hora.h"
#include <iostream>

void generarFechaHora(){

	// Primer metodo
	FechaHora fh1(23,9,1996,10,40,16);

	std::cout << "Primera fecha/hora: " << fh1 << std::endl;

	// Segundo metodo
	Hora h(16,48,25);
	Fecha f(15,3,2020);
	FechaHora fh2(f,h);

	std::cout << "Segunda fecha/hora: " <<fh2 << std::endl;
}


int main(){
	generarFechaHora();
}