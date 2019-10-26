#include <iostream>
#include <string>
using namespace std;

// Inclusión de la plantilla:
#include "Lista.h"
#include "Lista.cpp"

#define NO_EXISTE -32767

int main(){

	Lista<int> lista;
	Lista<string> lista2;


	string palabras[] = {"hola","lenguaje C", "C++", "Java", "Juan"};

	for (int i = 0 ; i < 5 ; i++){
		lista.insertar(i);
		lista2.insertar(palabras[i]);
	}

	cout << "LISTADO:" << endl;
	lista.imprime();
	cout << endl;

	cout << "Numero de elementos: " << endl;
	cout << lista.numeroElementos();
	cout << endl;

	cout << "LISTADO 2:" << endl;
	lista2.imprime();
	cout << endl;

	lista2.borrarTodos();
	lista.borrarTodos();

}
