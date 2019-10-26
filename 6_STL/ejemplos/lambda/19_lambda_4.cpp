/*

FUNCIONES LAMBDA: Crear predicados complejos con conjunciones logicas

*/


#include <iostream>
#include <functional>
#include <string>
#include <iterator>
#include <algorithm>


/*
Implementamos dos predicados simples funciones:
El primero dice si una cadena comienza con el caracter 'a' y 
el segundo dice si una cadena termina con el caracter 'b'.
*/

static bool begins_with_a (const std::string &s){
	// Comienza por a:
	return s.find("a") == 0;
}


static bool ends_with_b (const std::string &s){
	// Termina en b:
	return s.rfind("b") == s.length() - 1;
}

/*
Función auxiliar combinar. Toma un binario
funcionar como su primer parámetro, que podria ser la funcion AND logica o la funcion
funcion logica OR, por ejemplo. Luego, se necesitan otros dos parámetros, que deberan
ser dos funciones predicadas que luego se combinan:

*/
template <typename A, typename B, typename F> auto combinar(F funcion_binaria, A operadorA, B operadorB){

	/* Simplemente devolvemos una expresion lambda que captura el nuevo predicado
	combinacion. Reenvia un parametro a ambos predicados y, luego, coloca los resultados
	de ambos en la funcion binaria y devuelve su resultado:*/

	return [=](auto param){ return funcion_binaria(operadorA, operadorB); };
}

using namespace std;

int main(){

	auto a_AND_b (combinar(logical_and<>{},begins_with_a, ends_with_b));
	auto a_OR_b (combinar(logical_or<>{},begins_with_a, ends_with_b));

	// Procesa la entrada estandar e imprime por consola los que cumplen las dos cond. empezar por a y terminar por b
	
	
	cout << "Prueba con AND" << endl;
	copy_if(istream_iterator<string>{cin}, {}, ostream_iterator<string>{cout, ", "}, a_AND_b);
	cout << endl;
	

	cout << "Prueba con OR" << endl;
	copy_if(istream_iterator<string>{cin}, {}, ostream_iterator<string>{cout, ", "}, a_OR_b);
	cout << endl;

	// La llamada al programa se utilizara un paid: echo "a ab aaabbb" | ./programa
}



