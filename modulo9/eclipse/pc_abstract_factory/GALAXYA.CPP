/*
 * GalaxyA.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#include "GalaxyA.h"
#include "Tablet.h"
#include <iostream>

GalaxyA::GalaxyA(int capacidad): Tablet(capacidad) {
	// TODO Auto-generated constructor stub
}

void GalaxyA::internet (){
	std::cout << "Conectar a  internet con una Galaxy A" << std::endl;
}

GalaxyA::~GalaxyA() {
	// TODO Auto-generated destructor stub
}

