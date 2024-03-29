/*
 * Punto2D.cpp
 *
 *  Created on: 26 sept. 2019
 *      Author: antonio
 */

#include "Punto2D.h"
#include<iostream>

int main(){
	Punto2D nube[]={Punto2D(7,2),Punto2D(4,2),Punto2D(0,3),Punto2D(9,2)};
	int n=sizeof(nube)/sizeof(Punto2D);

	Punto2D punto(9,1);
	const Punto2D masCercano=punto.masCercano(nube, n);

	//punto.masCercano(nube,n).imprimir;
	masCercano.imprimir();


	//Desplazar this
	punto.desplazar(2);
	std::cout << "\nPunto desplazado con n=2" << std::endl;
	punto.imprimir();

	//Devolver copia modificada
	Punto2D copiaDesplazada = punto.desplazarNuevo(3);
	std::cout << "\nCopia de punto desplazado con n=3" << std::endl;
	copiaDesplazada.imprimir();

	//Probar operador
	Punto2D punto1(1,1);
	Punto2D punto2(2,2);

	Punto2D suma = punto1+punto2;
	suma.imprimir();
}
