
/* 

APORTACIONES C++: funciones de entrada y salida

*/

#include<iostream>
#include<string>

int main(){
	int numero;
	double real;
	std::string nombre;

	std::cout << "Un entero: ";
	std::cin >> numero;
	std::cout << "Entero: " << numero << std::endl;

	std::cout << "Un real: ";
	std::cin >> real;
	std::cout << "Entero: " << real << std::endl;

	std::cout << "Una cadena: ";
	std::cin >> nombre;
	std::cout << "Entero: " << nombre << std::endl;

	std::cout << "Teclea entero y real: ";
	std::cin >> numero >> real;
	std::cout << "Entero: " << numero << std::endl;
	std::cout << "Entero: " << real << std::endl;
}
