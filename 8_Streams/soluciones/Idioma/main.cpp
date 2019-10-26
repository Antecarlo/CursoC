
#include <iostream>
#include <string>
using namespace std;

#include "idioma.h"

int main(){

	// Prueba de ficheros por líneas:

	Idioma id("es");
	string nombre, apellido;

	cout << id.get("key_nombre") << ": ";
	cin >> nombre;

	cout << id.get("key_apellido") << ": ";
	cin >> apellido;


	cout << id.get("key_nombre") << ":" << nombre << ", " <<
		id.get("key_apellido") << ":" << apellido << endl;



}
