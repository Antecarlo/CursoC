#include "texto.h"

Texto::Texto(FlyWeightFactory *factoria)
{
	this->factoria = factoria;
}

void Texto::generar(){
	FlyWeight propiedades;
	int k = 65;
	string font="Arial";
	
	for (int x = 0 ; x < 10 ; x++)
		for (int y = 0 ; y < 10 ; y++){
			Letra letra((char)k, x, y, factoria->look(font,12,RED));
			font = (x % 2 == 0) ? "Calibri" : "Arial";
			letras.push_back(letra);	
			k++;
			if (k > 65+26) k = 65;
		}
}


void Texto::print(){
	for (auto &letra : letras)
		letra.print();
}

Texto::~Texto()
{
}
