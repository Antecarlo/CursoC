
#include "Figura.h"
#include "Figura2D.h"
#include "Figura3D.h"

#include "Triangulo.h"
#include "Cubo.h"
#include "Cuadrado.h"
#include "Cilindro.h"

#include "Escena.h"

#include <iostream>
#include <memory>


void test_raw_pointers(){
	Figura *f[4];
	Figura2D *f_2d[2];
	Figura3D *f_3d[2];

	f[0] = new Triangulo(2.5, 6);
	f[1] = new Cubo(3.4);
	f[2] = new Cuadrado(2.5);
	f[3] = new Cilindro(2.0, 5);

	for (int i = 0 ; i < 4 ; i++){
		f[i]->visualizar();
		delete f[i];

	}

	f_2d[0] = new Triangulo(2.5, 6);
	f_2d[1] = new Cuadrado(8);

	for (int i = 0 ; i < 2 ; i++){
		std::cout << "Area: " << f_2d[i]->area() << std::endl;
		delete f_2d[i];

	}
	
	f_3d[0] = new Cilindro(2.5, 6);
	f_3d[1] = new Cubo(8);

	for (int i = 0 ; i < 2 ; i++){
		std::cout << "volumen: " << f_3d[i]->volumen() << std::endl;
		delete f_3d[i];

	}
}


void test_smart_pointers(){
	std::unique_ptr< std::unique_ptr< Figura > []> figuras;
 
	figuras = std::make_unique< std::unique_ptr< Figura > []>(4);
	figuras[0] = std::make_unique<Triangulo>(2.5, 6);
	figuras[1] = std::make_unique<Cubo>(3.4);
	figuras[2] = std::make_unique<Cuadrado>(2.5);
	figuras[3] = std::make_unique<Cilindro>(2.0, 5);

	
	for (int i = 0 ; i < 4 ; i++)
		figuras[i]->visualizar();
}

void test_clase_Escena(){
	std::cout << "Prueba con la Clase Escena" << std::endl;
	Escena e(4); // Para 4 Figuras dentro de la Escena.

	e.addFigura(std::make_unique<Triangulo>(2.5, 6));
	e.addFigura(std::make_unique<Cubo>(3.4));
	e.addFigura(std::make_unique<Cuadrado>(2.5));
	e.addFigura(std::make_unique<Cilindro>(2.0, 5));

	e.visualizar();

}



int main(){
	//test_smart_pointers();
	test_clase_Escena();
	
}
