/*

Implementacion de la clase Escena.

*/

#include <iostream>
#include "Escena.h"


Escena::Escena(int n){

	this->n = n;
	this->pos = 0;
	
	// El vector de figuras ya esta creado

}


bool Escena::addFigura(std::unique_ptr<Figura> figura){
	// Ojo, hay que moverlo, no podemos hacer directamente push_back porque intentaria asignar y unique_ptr NO LO PERMITE
	if (this->pos < this->n){
		this->figuras.push_back(std::move(figura));
		this->pos++;

		//std::cout << "despues de push_back" << std::endl;
		//figura->visualizar();		 ERROR, ya se ha borrado el puntero figura, se ha movido al interior del vector de punteros

		return true;
	} else
		return false;
}

void Escena::visualizar(){

	for (int i = 0 ; i < this->n ; i++)		
		if (this->figuras[i] != nullptr)		
			this->figuras[i]->visualizar();
		else 
			std::cout << "Figura " << i << " sin crear..." << std::endl;
}


Escena::~Escena(){}
