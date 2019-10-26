/*
 * main.cpp
 *
 *  Created on: 2 oct. 2019
 *      Author: antonio
 */

#ifndef MAIN_CPP_
#define MAIN_CPP_

#include<iostream>
#include <vector>

#include "Coordenada.h"

void testClases(){
	std::vector<Coordenada> coordenadas = Coordenada::getCoordenadasAleatorias(8, 10);

	for (auto c: coordenadas)
		std::cout << c << std::endl;
}

int main(){
	testClases();
}



#endif /* MAIN_CPP_ */
