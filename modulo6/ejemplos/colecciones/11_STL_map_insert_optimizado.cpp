/*

STL ejemplo insertar elementos un mapa de forma eficiente (utilizano pistas).
Se trata de reducir las busquedas dentro del mapa.
*/


#include <map>
#include <string>
#include <iostream>

using namespace std;

int main(){
	map<string, size_t> mapa = {{"b",1}, {"c",2}, {"e",3}};

	

	// Ahora para hacer multiples inserciones, tomamos un iterador al final del mapa.
	auto insert_it (end(mapa));

	// Podemos insertar utilizando el iterador apuntando al final del mapa.
	// Lo iremos actualizando con posteriores inserciones:

	for (const auto &s : {"z", "y", "x", "w"}) {
		// Le damos como pista el ultimo elemento que hemos insertado:
		// Si lo elementos que estamos insertando, tienen alguna relacion, el lugar sera mas proximo.
		insert_it = mapa.insert(insert_it, {s, 1});

		// En este caso el metodo insert devuelve un iterador al elemento insertado.
	}

	// NO SE DEBERIA UTILIZAR ASI: aqui como pista, le estamos dando una pista completamente erronea.
	mapa.insert(end(mapa), {"a", 1});

	cout << endl << "Elementos finales del mapa: " << endl;
	for (auto [k,v] : mapa){
		cout << "k: " << k << " V: " << v << endl;
	}
}
