/* 

Ejemplo de un set para quitar los repetidos de un vector

*/

#include <vector>
#include <set>
#include <string>
#include <iostream>


int main(){
	std::set<std::string> sin_repes;
	std::vector<std::string> nombres = {"Ana", "Alberto", "Jaime", "Ana", "Sofia", "Alberto", "Ana"};

	for (auto nombre : nombres)
		sin_repes.insert(nombre);


	std::cout << "A partir del set: " << std::endl;
	for (auto n : sin_repes)
		std::cout << n << std::endl;

}
