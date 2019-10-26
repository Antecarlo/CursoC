/*

Ejemplo para  grabar un fichero de texto.

*/

#include <iostream>
#include <string>
#include <fstream>

int main(){

	std::ofstream fich; //Flujo
	std::string nombre;

	// Abrir fichero de salida (para escribir):
	fich.open("./datos.txt",std::ios::out);

	do{
		std::cout << "Dame nombre: " << std::endl;
		std::getline(std::cin,nombre);
		std::cout << std::endl;
		if (nombre != "fin")
			fich << nombre << std::endl; 
	}while(nombre!="fin");
	
	fich.close();
}
