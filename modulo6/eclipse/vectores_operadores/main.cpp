/*
 * main.cpp
 *
 *  Created on: 7 oct. 2019
 *      Author: antonio
 */

#include <vector>
#include "Punto2D.h"
#include <iostream>

/*
 *
 * Crear dos vectores de puntos y comparar si son iguales, si uno es mas que otro, etc.
 *
 */

int main(){
	std::vector<Punto2D> v1={Punto2D(0,3),Punto2D(4,7),Punto2D(9,2),Punto2D(1,7),Punto2D(6,2)};
	std::vector<Punto2D> v2={Punto2D(0,2),Punto2D(4,8),Punto2D(9,2),Punto2D(1,7),Punto2D(6,2)};


	if(v1==v2)
			std::cout << "v1 == v2" << std::endl;
		else
			std::cout << "v1 != v2" << std::endl;

	if(v1>v2)
			std::cout << "v1 > v2" << std::endl;
		else
			std::cout << "v1 < v2" << std::endl;
}


