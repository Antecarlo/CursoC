/* 

STL map

En este caso, suponemos que las claves son ctes. no se van a modificar pero necesitamos
cambiar los valores. Por ejemplo, en la clasificacion de una carrera, los puestos 1,2,3 ...
no varian, pero lo pueden hacer los pilotos.

Antes de C++17 habia que borrar las claves y volver a insertar. Parece poco eficiente.
Ahora se puede hacer sin eliminar las claves.
*/

#include <map>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template <typename M> void print(const M &r){

	cout << endl << "Clasificacion actual:" << endl;
	for (const auto & [k,v] : r)
		cout << k << ":" << v << endl;

}

int main(){
	map<int, string> race = {{1, "Mario"}, {2, "Luigi"}, 
				{3, "Bowser"},{4, "Peach"}, 
				{5, "Yoshi"}, {6, "Koopa"},
				{7, "Toad"}, {8, "Donkey Kong Jr."}};
	print(race);

	cout << endl << "Se producen cambios en la clasificacion de la carrera" << endl;

	// La claves que queramos cambiar, tenemos que utilizar extract que altera la memoria.
	auto a(race.extract(1));
	auto b(race.extract(3));

	cout << endl << "se van a intercambiar: " << a.key() << " " << " y " << b.key() << " " << endl;

	// Ahora intercambiamos las claves con swap
	swap(a.key(), b.key());

	race.insert(move(a));
	race.insert(move(b));

	print(race);
}

