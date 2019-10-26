/*

Aportaciones C++ Acceso local/global 

26/09/2019

*/

#include<iostream>

int numero=100;

int main(){
	int numero=1;
	std::cout << "Numero local: " << numero << std::endl;
	std::cout << "Numero global: " << ::numero << std::endl;

	//Ambito de i dentro de un bucle for
	for(int i=0;i<10;i++){
		std::cout << i << std::endl;
	}
}


