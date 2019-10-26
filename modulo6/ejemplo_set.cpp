/*

Utilizar un set para quitar repetidos de una secuencia de numeros

*/

#include <set>
#include <string>
#include <iostream>

#include <ctime>
#include <cstdlib>
#include <list>

void set_string(){
	//Definir una lista de personas inicializada con repetidos y pasarlos a un set (sin repetidos).

	//std::list <std::string> lista={"",""};

	std::list <std::string> lista;	
	lista.push_back("Carlos");
	lista.push_back("Elisa");
	lista.push_back("Pedro");
	lista.push_back("Beatriz");
	lista.push_back("Lucia");
	lista.push_back("Pedro");
	lista.push_back("Pedro");
	lista.push_back("Elisa");
	lista.push_back("Carlos");
	lista.push_back("Beatriz");
	lista.push_back("Lucia");
	lista.push_back("Beatriz");
	lista.push_back("Lucia");

	std::set<std::string> nombres;
	/*
	for(auto l : lista){
		nombres.insert(l);
	}
	*/
	nombres.insert(lista.begin(),lista.end());

	for(auto n:nombres){
		std::cout << n <<std::endl;
	}


	
}

void array_C(){
	int numeros[]={6,5,4,4,4,3,1,1,2,23,4,7};
	int tam=sizeof(numeros)/sizeof(int);

	std::set<int> conjunto;
	conjunto.insert(numeros,numeros+tam);
	// numeros+tam -> puntero a la direccion siguiente a la ultima direccion de memoria del array

	for(auto c: conjunto)
		std::cout << c << std::endl;

}

std::set<int> set_aleatorios(int n, int tope){
	std::srand(std::time(0));
	std::set<int> numeros;

	while(numeros.size()<n){
		numeros.insert(std::rand()%tope);
	}

	return numeros;
}

int main(){

/*
	auto conjunto = set_aleatorios(25,100);
	for(auto n:conjunto)
		std::cout << n << std::endl;
*/

	set_string();
	array_C();
}
