
/*

Ejemplos con funciones de algoritmos: count, find, sort

*/


#include <vector>
#include <algorithm>
#include <iostream>


void pruebasFind(){
	std::vector<int> numeros = {6,7,5,4,3,2,1,66,77,55,44,33};

	std::cout << "PRUEBAS FIND" << std::endl;

	// Localizar un elemento concreto:
	auto it = std::find(numeros.begin(), numeros.end(), 111);

	if (it != numeros.end())
		std::cout << "Encontrado: " << *it << std::endl;
	else
		std::cout << "NO Encontrado: " << std::endl;


	// Encontrar el primer numero > 10
	auto it2 = std::find_if(numeros.begin(), numeros.end(), [](int n){return n > 10;} );
	if (it2 != numeros.end())
		std::cout << "Encontrado un numero > 10: " << *it2 << std::endl;
	else
		std::cout << "NO Encontrado: " << std::endl;

	// Encontrar el primer numero que no sea < 10
	auto it3 = std::find_if_not(numeros.begin(), numeros.end(), [](int n){return n < 10;} );
	if (it3 != numeros.end())
		std::cout << "Encontrado un numero que NO sea < 10: " << *it3 << std::endl;
	else
		std::cout << "NO Encontrado: " << std::endl;
}


void pruebasCount(){
	std::vector<int> numeros = {33,6,7,5,4,3,2,1,6,6,7,7,55,44,33};

	std::cout << std::endl << "PRUEBAS COUNT" << std::endl;
	
	// Contar el numero de repeticiones de un numero:
	auto num = std::count(numeros.begin(), numeros.end(), 7);
	std::cout << "Numero de repetidos (7): " << num << std::endl; 

	// Contar los numeros que estan por encima de 10
	auto num2 = std::count_if(numeros.begin(), numeros.end(), [](int n){ return n > 10; });
	std::cout << "Numeros >  10: " << num2 << std::endl; 
}

void pruebasSort(){
	std::vector<int> numeros = {33,6,7,5,4,3,2,1,6,6,7,7,55,44,33};

	std::cout << std::endl << "PRUEBAS SORT" << std::endl;
	std::sort(numeros.begin(), numeros.end());

	for (auto i : numeros)
		std::cout << i << " ";
	std::cout << std::endl;	

	std::sort(numeros.begin(), numeros.end(), std::greater<int>());
		
	for (auto i : numeros)
		std::cout << i << " ";
	std::cout << std::endl;	


}


int main(){
	pruebasFind();
	pruebasCount();
	pruebasSort();
}
