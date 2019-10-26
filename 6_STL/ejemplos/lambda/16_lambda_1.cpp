/*

Definicion y uso de funciones Lambda.

*/

#include <string>
#include <iostream>

using namespace std;


// Definicion sin parametros:
auto funcion1([](){return 1;});

// Sin parametros, los parentesis son opcionales:
auto funcion2([]{return 2;});

// Con dos parametros:
auto suma([](auto a, auto b){return a+b;});

// Con parametros y una variable interna:
// mutable: para que se pueda modificar.
auto contador([count = 0] () mutable {return ++count;});

// Currying:
auto suma_10( [=] (int x){ return suma(10,x); });


int main(){

	cout << funcion1() << ", " << funcion2() << '\n';
	cout << endl << "suma(8,6):" << suma(6,8) << endl;

	// Se puede utilizar con mas tipos:
	cout << "Cadenas: " << suma(string{"hola"}, string{"adios"}) << endl;

	// Con la funcion lambda en la misma expresion:
	// En este caso los parametros se pasan al final de la expresion
	cout << [](auto l, auto r){ return l + r; }(1, 2) << endl;

	// Hacemos una prueba de llamar a contador(), cada vez que se le llame 
	// incrementara la variable count.
	cout << "Llamadas a contador: " << endl;
	for (int i = 0 ; i < 5 ; i++){		
		cout << contador() << ", ";
	}
	cout << endl;

	// Tambien se pueden incrementar variables dentro de la closure (o cierre):
	int a {0};
	// La variable se captura por referencia.
	auto incrementar( [&a] { ++a; } );
	
	incrementar();
	incrementar();

	cout << "El valor de a es: " << a << endl;

	cout << "Prueba Currying:" << endl;
	cout << "Llamada a suma_10: " << suma_10(5) << endl;

}

