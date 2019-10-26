/*

	STL: priority_queue, se encuentra en el fichero de cabecera: queue

*/


#include <iostream>
#include <queue>
#include <string>
#include <tuple>

using namespace std;


int main(){


	using item_type = pair<int, string>;

	priority_queue<item_type> q; // La cola con prioridad se basa en un par, donde el int representa la prioridad y
	// el string la descripcion.


	// La cola no tiene un constructor con una lista de iniciadores. Primero se construye una lista y luego se
	// carga en la cola, para que reordene las tareas por orden de prioridad.

	initializer_list<item_type> il {{1, "dishes"},{0, "watch tv"},{2, "do homework"},{0, "read comics"}};

	// Recorremos la lista y hacemos push sobre la cola:
	for (const auto &item : il){

		q.push(item);
	}

	// Con el metodo top vemos el elemento que es el mas prioritario:
	// Como los elementos son pares, accedemos a first / second

	cout << endl << "Lista de tareas organizadas en la cola con prioridad:" << endl;
	while (!q.empty()){
		cout << q.top().first << "  " << q.top().second << endl;
		q.pop(); // Lo elimina de la cola.
	}
}
