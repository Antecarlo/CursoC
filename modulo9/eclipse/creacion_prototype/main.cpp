/*
 * main.cpp
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */

#include<iostream>
#include<memory>

#include"Figura.h"
#include"Figura2D.h"
#include"Figura3D.h"

#include "Circulo.h"
#include "Cilindro.h"
#include "Triangulo.h"
#include "Esfera.h"

void test_error_abstract(){
	//Figura f; ERROR
	//Figura *f;
	std::unique_ptr<Figura>ptr; //Un smart pointer ok!

	//NO SE PUEDEN INSTANCIAR DINAMICAMENTE OBJETOS DE CLASES ABSTRACTAS!
	//f=new Figura;
	//ptr=std::make_unique<Figura>("f1","red");
}

void test_array_figuras(){
	//Definir array de sp a Figura;
	std::unique_ptr<std::unique_ptr<Figura> []> figuras;

	//Crear array de 4 figuras
	figuras=std::make_unique<std::unique_ptr<Figura>[]>(4);

	//Rellenar el array de figuras

/*
	//Circulo circulo("Circulo1","Blue",5.0);
	auto circulo = std::make_unique<Circulo>("Circulo1","Blue",5.0);
	auto cilindro = std::make_unique<Cilindro>("Cilindro1","Green",5,9);
	auto esfera = std::make_unique<Esfera>("Esfera1","",6);
	auto triangulo = std::make_unique<Triangulo>("Triangulo1","Orange",5,15);

	figuras[0]=circulo;
	figuras[1]=cilindro;
	figuras[2]=esfera;
	figuras[3]=triangulo;
*/ //ERROR, AL SER PUNTEROS UNICOS NO SE PERMITEN COPIAR

	figuras[0]=std::make_unique<Circulo>("Circulo1","Blue",5.0);
	figuras[1]=std::make_unique<Cilindro>("Cilindro1","Green",5,9);
	figuras[2]=std::make_unique<Esfera>("Esfera1");
	figuras[3]=std::make_unique<Triangulo>("Triangulo1","Orange",5,15);

	for(int i=0;i<4;i++){
		figuras[i]->dibujar();
	}
}

void test_array_figuras_auto(){
	//Inferir array de sp a Figura;
	auto figuras = std::make_unique<std::unique_ptr<Figura>[]>(4);

	//Rellenar el array de figuras
	figuras[0]=std::make_unique<Circulo>("Circulo1","Blue",5.0);
	figuras[1]=std::make_unique<Cilindro>("Cilindro1","Green",5,9);
	figuras[2]=std::make_unique<Esfera>("Esfera1","",6);
	figuras[3]=std::make_unique<Triangulo>("Triangulo1","Orange",5,15);

	for(int i=0;i<4;i++){
		figuras[i]->dibujar();
	}
}

int main(){
	//test_error_abstract();
	//test_array_figuras();

}
