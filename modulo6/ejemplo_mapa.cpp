/*

Ejemplo de un mapa, insertar elementos, iteradores, etc.

*/

#include<map>
#include<string>
#include<iostream>

void prueba1(){
	//Definir e inicializar un mapa:
	std::map<std::string,int> mapa= {{"Uno",1},{"Dos",2},{"Tres",3}};

	//Definir un iterador:
	std::map<std::string, int>::iterator it;

	//Recorrer el mapa con el iterador:
	for(it=mapa.begin();it!=mapa.end();it++)
		std::cout << it ->first << " -> "<< it->second << std::endl;

	//INsertar una clave
	mapa["Cuatro"]=4;
	std::cout << mapa.at("Cuatro") << std::endl;

}

int main(){
	prueba1();
}
