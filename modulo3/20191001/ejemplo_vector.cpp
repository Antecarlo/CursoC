/*

Ejemplo de uso de la clase vector

*/

#include <vector>
#include <string>
#include <iostream>

void test_int(){

	// Definir e inicializar
	std::vector<int> v1 = {1,2,2,34,5,6,7,8};

	//Solo definir con un tamaño 
	std::vector<int> v2(5,-100);

	// Aplicar metodos:
	std::cout << "v1 tiene " << v1.size() << " elementos" <<std::endl;
	std::cout << "v2 tiene " << v2.size() << " elementos" <<std::endl;

	std::cout << "V1: " << std::endl;
	for (int i=0; i<v1.size(); i++)
		std::cout << v1[i] << " " << v1.at(i) << std::endl;

	std::cout <<std::endl;
	std::cout << "V2: " << std::endl;
	for (int item:v2) //Recorre los elementos de v2 y los deja en item
		std::cout << item << std::endl;

	//Modificar los elementos del vector en el mismo bucle:
	//Recorre el vector y recupera una referencia a cada uno de los elementos
	for (auto & item :v1){
		item+=10;
		std::cout << item <<std::endl;
	}

	std::cout <<std::endl;
	std::cout << "Despues de modificar v1+10 " << std::endl;	
	for (auto i:v1)
		std::cout << i <<std::endl;

	std::cout <<std::endl;
	std::cout << "V2: con auto " << std::endl;
	for (auto item:v2)
		std::cout << item << std::endl;
}

void test_string(){
	std::vector <std::string> nombres = {"Ana","Olga","Raquel"};

	for (auto s:nombres)
		std::cout << s << std::endl;

	nombres.push_back("Alberto");
	nombres.push_back("Alberto");

	std::cout << "Despues de modificar el vector de strings:" << std::endl;
	for (auto s:nombres)
		std::cout << s << std::endl;
	
}

int main(){

	test_int();
}
