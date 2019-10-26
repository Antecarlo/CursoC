/*
 * main.cpp
 *
 *  Created on: 30 sept. 2019
 *      Author: antonio
 */


#include<iostream>
#include <memory>

#include "Persona.h"
#include "Empleado.h"
#include "Programador.h"
#include "JefeProyecto.h"

void test_polimorfismo_ptr(){
	Persona *ptr;

		//Vamos a referenciar un objeto de la clase hija: empleado a traves de un puntero de la clase padre.
		ptr=new Empleado("Ana","Gomez",66.5,1.78,2000.0,"GMV");
		//ptr->dormir();
		delete ptr;

		Persona * grupo[3];
		grupo[0]=new Persona("Persona1","",0,0.0);
		grupo[1]=new Empleado("Emp1","",0,0.0,1000.0,"GMV");
		grupo[2]=new Programador("Program","",0,0.0,1000.0,"GMV","C++");

		for(int i=0;i<3;i++){
			grupo[i]->dormir();
			std::cout << std::endl;
			std::cout << *(grupo[i]) << std::endl; //Le pasamos el objeto, no el puntero a objetos (* array de punteros(i))
			std::cout<< "-------------------------------" << std::endl;
		}
}

void test_polimorfismo_smart_pointers(){

	auto grupo= std::make_unique<std::unique_ptr<Persona>[]>(3);
	//Nos permite introducir punteros a empleado y programador porque son hijas de persona

	//ERROR, un unique_ptr NO SE PUEDE ASIGNAR DIRECTAMENTE. SOLO SE PUEDE HACER RESET DEL PUNTERO!
	//grupo[0]=new Persona("Ana","Gomez",67.9,1.67);

	grupo[0].reset(new Persona("Ana","Gomez",67.9,1.67));
	grupo[1].reset(new Empleado("Alberto","Sanz",89,1.89,1500.0,"GMV"));
	grupo[2].reset(new Programador("Luis","Gonzalez",76,1.85,1700.0,"GMV","Java"));

	std::cout << "Lista de Personas" << std::endl;
	for(int i=0;i<3;i++){
		if(grupo[i]==nullptr)
			std::cout << "Ptr vacio" << std::endl;
		else{
		grupo[i]->imprimir();
		std::cout << "---------------------------------" <<std::endl;
		}
	}
	std::cout << std::endl;

	//Un smart p. a Persona
	auto persona = std::make_unique<Persona>("Ana","Gomez",67.9,1.67);
	std::cout << *persona << std::endl;

	//Un array de  smart p. a Personas:
	auto personas= std::make_unique<Persona []>(3);
	for(int i=0;i<3;i++){
		std::cout << personas[i] << std::endl;
	}

	//Un smart p. a empleado
	auto empleado= std::make_unique<Empleado>("Alberto","Sanz",89,1.89,1500.0,"GMV");
	std::cout << * empleado << std::endl;
	//std::cout << "nombre emp: " << empleado->getNombre() << std::endl;

	//Un smart p. a programador
	auto programador= std::make_unique<Programador>("Luis","Gonzalez",76,1.85,1700.0,"GMV","Java");
	std::cout << * programador << std::endl;


}

int main(){

	/*
	Empleado e("Ana","Gomez",66.5,1.78,2000.0,"GMV");
	std::cout << "Nombre: " << e.getNombre() << std::endl;
	e.dormir();
	std::cout << "Objeto completo: " << std::endl;
	std::cout << e << std::endl;

	//Programador
	Programador p("Carlos","Antequera",70,1.83,2200.0,"GMV","C/C++");
		std::cout << "Objeto completo: " << std::endl;
		std::cout << p << std::endl;

		//JefeProyecto
	JefeProyecto jp("Luis","Martinez",90,1.78,2000.0,"GMV","Proyecto x");
		std::cout << "Objeto completo: " << std::endl;
		std::cout << jp << std::endl;

		p.subirSueldo(10.0);
		jp.subirSueldo(10.0, 500);


		std::cout << std::endl;
		std::cout << "Objeto completo: " << std::endl;
		std::cout << p << std::endl;

		std::cout << std::endl;
		std::cout << "Objeto completo: " << std::endl;
		std::cout << jp << std::endl;


		Persona persona;
		Empleado emp("Ana","Gomez",66.5,1.78,2000.0,"GMV");

		//A un objeto de la clase padre se le puede asignar un objeto de la clase hija
		persona=emp;
		std::cout << std::endl << persona << std::endl; //No muestra los atributos propios de empleado

		//Sin embargo, a un objeto de la clase hija no se le puede asignar un objeto de la clase padre
		//mp=persona; ERROR!
		*/



		////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	test_polimorfismo_smart_pointers();

		}

