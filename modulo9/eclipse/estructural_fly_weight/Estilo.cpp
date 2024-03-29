/*
 * Estilo.cpp
 *
 *  Created on: 17 oct. 2019
 *      Author: antonio
 */

#include "Estilo.h"

#include <string>
#include <iostream>

Estilo::Estilo(bool negrita, TLetra tletra, int size, TColor color): negrita(negrita),tipoletra(tletra),size(size),color(color) {
}

int Estilo::getCodigo() const{
	char codigo[50];
	std::sprintf(codigo, "1%d%d%02d%d",tipoletra,color,size,(negrita)?1:0);
	std::string aux= std::string(codigo);
	return std::stoi(aux);
}


void Estilo::imprimir() const{
	const char * letras[]={"VERDANA","TAHOMA","CALIBRI","ARIAL"};
	const char * colores[]= {"RED","GREEN","BLUE","YELLOW","BLACK"};

	std::cout << "(" << letras[this->tipoletra] << " - " << colores[this->color] << " - "<< size << " - " << ((negrita)?"TRUE":"FALSE")<< ")" <<std::endl;
}

Estilo Estilo::getEstilo(int codigo){

	Estilo e;

	std::string code = std::to_string(codigo);

	//Negrita
	e.negrita=code[5]=='1';

	//Letra
	e.tipoletra = (TLetra)(code[1]-'0');

	//Color
	e.color = (TColor)(code[2]-'0');

	//Size
	//e.size= ((int)code[3]*10)+((int)code[4]);
	e.size = std::stoi(code.substr(3,2));

	return e;
}

Estilo Estilo::estiloAleatorio() {
	Estilo e;
	e.color = (TColor)(rand()%5);
	e.tipoletra=(TLetra)(rand()%4);
	e.negrita=(rand()%2==0);
	e.size=8+(rand()%12);
	return e;
}

Estilo::~Estilo() {
	// TODO Auto-generated destructor stub
}

