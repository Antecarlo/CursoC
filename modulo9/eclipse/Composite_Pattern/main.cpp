/*
 * main.cpp
 *
 *  Created on: 21 oct. 2019
 *      Author: antonio
 */

#include <memory>
#include <iostream>

#include "Expresion.h"
#include "ExpresionNumerica.h"
#include "ExpSuma.h"
#include "ExpResta.h"

int main(){

	std::shared_ptr<Expresion> p1 (new ExpresionNumerica(57));
	std::shared_ptr<Expresion> p2 (new ExpresionNumerica(60));
	std::shared_ptr<Expresion> p3 (new ExpresionNumerica(28));

	std::shared_ptr<Expresion> suma (new ExpSuma(p1,p2));
	std::shared_ptr<Expresion> resta (new ExpResta(suma,p2));
	std::shared_ptr<Expresion> suma2 (new ExpResta(resta,suma));
	std::shared_ptr<Expresion> resta2 (new ExpResta(suma2,resta));

	std::cout << "Expresion: "<< resta2->to_string() << std::endl;
	std::cout << "Resul: "<< resta2->getValue() << std::endl;
}



