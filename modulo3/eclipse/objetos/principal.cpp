/*
 * principal.cpp
 *
 *  Created on: 25 sept. 2019
 *      Author: antonio
 */

#include "Persona.h"
#include "Coche.h"
#include "Numero.h"
#include "Vector.h"
#include <iostream>

void pruebaObjetos(){


	/*
	Persona p2; //Llama al const. por defecto.

	//Llama al constructor con 4 parametros.
	Persona p1("Alberto","Sanz",90,1.94);
	Persona p3("Sara","Gomez",65,1.76);

	p2.dormir();
	p1.hablar(p3);
	*/


	//Coches
	const Coche coche1("Ford","Fiesta","2349GRP",110.45,2018);
	coche1.imprimir();
	
	//Uso del constructor copia
	Coche coche2(coche1);
	coche2.imprimir();
	
	//Uso del operador =
	Coche coche3;
	coche3=coche2;
	coche3.imprimir();
	
	//if(coche3==coche2 ) Habría que implementarlo en la clase
	// std::cout << "coche3 y coche2 son iguales";

}

void pruebaNewDelete(){

	Coche * coche=0;

	//Para crear el coche de forma dinamica tambien utilizamos el constructor de la clase:
	coche=new Coche("Audi","A3","1085APR",220.85,2017);
	coche->imprimir();

	//Liberar memoria:
	delete coche;
}

void pruebaNewDeleteArray(){
	int * p=0;

	p=new int[10];
	for (int i=0;i<10;i++)
		p[i]=i+1;

	for (int i=0;i<10;i++)
		std::cout << i << std::endl;

	delete  p;
}

void pruebaVector(){
	Vector v1;
	Vector v2(8);

	for(int i=0; i<10;i++){
		if(v1.add(i))
			std::cout << "add en v1 ok" <<std::endl;
		else
			std::cout << "add en v1 FALSE" <<std::endl;
		if(v2.add((i+1)*100))
			std::cout << "add en v2 ok" <<std::endl;
		else
			std::cout << "add en v2 FALSE" <<std::endl;
	}
	std::cout << "v1: " <<std::endl;
	v1.imprimir();

	std::cout << "v2: " <<std::endl;
	v2.imprimir();

	Vector v3(v2);
	v2.set(0,10000);

	std::cout << "v3: " <<std::endl;
	v3.imprimir();

	std::cout << "v2: " <<std::endl;
	v2.imprimir();

	v1=v2;
}

int main(){

	//pruebaObjetos();
	//pruebaNewDelete();

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Vector
	pruebaVector();

}




