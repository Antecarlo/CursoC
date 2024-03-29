/*
 * Main file
 *
 */

#include "Hora.h"
#include "Fecha.h"
#include "FechaHora.h"

#include<iostream>
#include<chrono>
#include<thread>

void pruebaOperadores(){

	//Implementar operator== con una funcion friend.
	//Y operator< con un metodo de la clase

		Hora h1(10);
		Hora h2(10);

		if(h1==h2)
			std::cout<< "h1==h2"<<std::endl;
		else if (h1<h2)
			std::cout << "h1<h2"<<std::endl;
		else
			std::cout << "h1>h2"<<std::endl;

		std::cout <<"h1: " << h1 << std::endl << "h2: "<< h2 << std::endl;

		int x;

		std::cout << "Escribe una hora: "<<std::endl;
		std::cin >> h1 >> x;
		std::cout << "h1 leida: " <<h1 << std::endl;
		std::cout << "x " << x;

		Hora a(0),b(1);

		std::cout<< "a: " << a << "b: " << b << std::endl;
		a=++b;
		std::cout<< "a: " << a << "b: " << b << std::endl;

		a.setH(0);
		b.setH(1);

		std::cout<< "a: " << a << "b: " << b << std::endl;
		a=b++;
		std::cout<< "a: " << a << "b: " << b << std::endl;

 }

void prueba(){
	Hora horaActual;
	Hora h1(9);
	Hora h2(12,56);
	Hora h3(3,45,23);

	//unsigned int x=1000;

	horaActual.imprimir();
	h1.imprimir();
	h2.imprimir();
	h3.imprimir();

	Hora hPrueba(24,59,59);
	std::cout << "Hora antes del incremento: \n" << std::endl;
	hPrueba.imprimir();
	hPrueba.inc();
	std::cout << "\nHora tras el incremento: \n" << std::endl;
	hPrueba.imprimir();

	Hora hPrueba2(23,58,58);

	/*
	while(1){
		//system("clear");
		hPrueba2.inc();
		hPrueba2.imprimir();
		std::this_thread::sleep_for(std::chrono::milliseconds(x));
	}
	*/

}

void pruebaFechaHora(){
    FechaHora fh(23,20,18,23,9,1996);
    fh.imprimir();
}

int main(){

	//pruebaOperadores();
	pruebaFechaHora();

}
