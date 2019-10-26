/*

Ejemplo de plantillas genericas

*/

#include <iostream>
#include <string>
#include <cstring>
#include <vector>

template <class T, class R> auto menor (T a, R b){
	return (a<b)?a:b;
}

const char * menor (const char * s1, const char * s2){
	//Para los tipos const char *, esta funcion tiene mayor prioridad que la del template
	std::cout << "Salta const char* "<<std::endl;
	return std::strcmp(s1,s2)<0 ? s1:s2;
}


template <class T> T menor (T a, T b){
	std::cout << "Salta template "<<std::endl;
	return (a<b)?a:b;
}

void imprimir(auto vector){
	for (auto v: vector){
		std::cout << v << std::endl;
	}
}

template <class T> void imprimir (std::vector<T> v){

	//Especializacion parcial	
	//EL parametro debe ser un vector, pero cambia el tipo del vector.

 	for(auto i:v)
		std::cout << i << " ";

	std::cout << std::endl;
}

int main(){

	/*
	char cad1[20]={"hola"};
	char cad2[20]={"Hora"};

	const char * s1 = "Hora";
	const char * s2 = "hola";

	//Vectores
	std::vector<int> v_menor;
	std::vector<int> v1={4,5,6,7,3};
	std::vector<int> v2={4,5,5,7,3};
	std::vector<std::string> nombres={"olga","ana","alberto"};

	std::cout << "Menor de char []: " << menor(cad1,cad2) << std::endl;
	std::cout << "Menor de int: " << menor(4,6) << std::endl;
	std::cout << "Menor de string: " << menor(std::string("hola"),std::string("Hola")) << std::endl;
	std::cout << "Menor de double: " << menor(4.9999,6.9999) << std::endl;
	std::cout << "Menor de const char *: " << menor(s1,s2) << std::endl;

	//Error No puede generar la funcion menor para los tipos int, double. Los parametros deben ser del mismo tipo.
	//std::cout << "Menor de int /double: " << menor(123,566.88) << std::endl;

	v_menor = menor(v1,v2);
	imprimir(v_menor);
	imprimir(nombres);
	*/

	auto resul = menor(8.99,68);
	std::cout << "menor double, int: " << resul << std::endl;

	



}
