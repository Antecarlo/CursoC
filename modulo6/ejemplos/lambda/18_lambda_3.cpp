/*

FUNCIONES LAMBDA: Este ejemplo explica cómo imitar la concatenación de funciones en C++ con expresiones lambda.

*/

#include <iostream>
#include <functional>

using namespace std;


// En esta funcion definimos una funcion que explica como
// imitar la concatenacion de funciones en C++ con expresiones lambda.
template <typename T, typename ... Ts> auto concat(T t, Ts ... ts){

	// Recibe muchos parametros que seran funciones. Como f, g, h, etc.
	// El resultado sera otro objeto funcion que aplica: f(g(h(...)))

	// Asi vamos a simular la concatenacion de funciones...	
	// Ahora, se pone un poco complicado. Cuando el usuario proporciona las funciones f, g y h,

	/* El proceso es el siguiente: concat(f,g,h)
	Evaluaremos esto a f (concat (g, h)), que nuevamente se expande a:
	f (g (concat (h))), donde la recursion aborta, por lo que obtenemos f (g (h (...))). 
	
	La construccion if constexpr comprueba si estamos en un paso de recursion con
	más de una funcion para concatenar a la izquierda. */

	if constexpr (sizeof...(ts) > 0) {
		return [=](auto ...parameters) { return t(concat(ts...)(parameters...)); };

	} else {
		return t;
	}
}



int main(){

	auto doble ([] (int i) { return i * 2; });
	auto triple ([] (int i) { return i * 3; });
	auto suma([](auto a, auto b){return a+b;});

	auto combinar (concat(triple, doble, plus<int>{}));
	
	// Realiza el siguiente calculo: 2 * 3 * (2 + 3) = 30
	cout << combinar(2, 3) << endl;

}



