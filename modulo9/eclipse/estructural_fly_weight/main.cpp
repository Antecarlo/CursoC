/*
 * main.cpp
 *
 *  Created on: 17 oct. 2019
 *      Author: antonio
 */

#include "Estilo.h"
#include "Texto.h"
#include <iostream>

void pruebaEstilo(){
	Estilo s1;
	Estilo s2(true);

	s1.imprimir();
	int codigo1 = s1.getCodigo();
	std::cout << "Codigo: "<< codigo1 << std::endl;

	s2= Estilo::getEstilo(codigo1);
	s2.imprimir();
}

void pruebaFinal(){

	Estilo estiloBase;
	FactoriaFlyWeight factoria(estiloBase);
	Texto texto(factoria); //Aqui trabaja con una copia de factoria(estiloBase). Debemos pasarle referencia.

	texto.addLetra('H',Estilo(true));
	texto.addLetra('O',Estilo(false,TAHOMA));
	texto.addLetra('L',Estilo(true));
	texto.addLetra('A',Estilo(true));

	texto.imprimir();

	for(int i=0; i<10000;i++)
		texto.addLetra('H', Estilo::estiloAleatorio());
	texto.imprimir();
}


int main(){
	//pruebaEstilo();
	pruebaFinal();

}


