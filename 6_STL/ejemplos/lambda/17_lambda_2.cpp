/*

Funciones Lambda

*/

#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <functional>

using namespace std;


// Recibe un contenedor y devuelve una funcion lambda
// que recibe por referencia el contenedor y un parametro
// que se añade al contenedor.
static auto consumer (auto &container){
	return [&] (auto value) {
		container.push_back(value);
	};
}


// Esta otra funcion recibe e imprime el contenedor:
static void print(const auto &v){

	cout << "Contenido del contenedor:" << endl;
	for (auto &item : v )
		cout << item << ", ";
	cout << endl;
}

int main(){
	// Definimos 3 almacenes de enteros:
	deque<int> cola;
	list<int> lista;	
	vector<int> array;

	// Se define un vector de funciones:
	const vector<function<void(int)>> consumidores {consumer(cola), consumer(lista), consumer(array)};

	for (int i {0} ; i < 10 ; i++){
		
		// Recorre la lista de funciones: En el vector tenemos 3 funciones lambda
		for (auto &&item : consumidores)
			item(i);	
	}

	cout << "Cola:" << endl;
	print(cola);

	cout << "Lista:" << endl;
	print(lista);

	cout << "Vector:" << endl;
	print(array);
}
