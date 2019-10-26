/*
 * Main file
 *
 */

#include "Hora.h"
#include<iostream>
#include<chrono>
#include<thread>

int main(){

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
