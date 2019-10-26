/*
 * main.cpp
 *
 *  Created on: 14 oct. 2019
 *      Author: antonio
 */

#include <iostream>
#include "Fichero.h"

int main(){

	Fichero fichero("config.ini");
	std::cout << "Tiempo: " <<fichero.getKey("tiempo")<< std::endl;
	//fichero.setKey("Adicional3", "valor");
	//fichero.save("config2.ini");
	fichero.imprimirMapa();
}


