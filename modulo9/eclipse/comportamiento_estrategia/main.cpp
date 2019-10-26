/*
 * main.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

#include <iostream>
#include <chrono>
#include <thread>

#include "Contexto.h"
#include "constantes.h"

int main() {

	//Generar numeros aleatorios
	std::srand(std::time(0));
	int  numeros[N];

	for(int i=0; i<N; i++)
		numeros[i]=rand();

	Contexto contexto(numeros,N);
	//contexto.testEstrategias();
	contexto.ordenar();

}



