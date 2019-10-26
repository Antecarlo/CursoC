/*

Aportaciones de C++, control de excepciones: errores en tiempo de ejcucion. Permite capturarlos y tratarlos.

*/

#include<iostream>
#include<string>
#include<stdexcept>

int main(){
	std::string cadena="Mensaje de prueba";

	try{

	std::cout << "Char 0: " << cadena[0] << std::endl;
	std::cout << "Char 0: " << cadena.at(78) << std::endl;

	}catch(std::out_of_range &e){

	std::cout << "Se ha producido un error: " << e.what() << std::endl;

	}

	//Si se produce o no el error, lo siguiente se ejecuta
	std::cout << "Fin del programa" << std::endl;
}
