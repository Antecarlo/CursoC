/*

Mapa desordenado

*/

#include<unordered_map>
#include<string>
#include<iostream>


int main(){
	// Elegir esta coleccion cuando no influya el orden de las claves o no tenga sentido:
	std::unordered_map<std::string,int> personas = {{"Olga",45},{"Andres",33},{"Marta",34}};

	//Recuperando datos por referencia
	for(auto & [nombre,edad] : personas) //Por referencia podemos modificar los elementos
		edad++;

	//Desempaqueta la clave y el valor
	for(auto [k,v] : personas)
		std::cout << "Nombre: " <<k<< " - edad" << v << std::endl;
}
