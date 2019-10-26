/*

STL set para filtrar valores repetidos en la entrada del usuario.

*/

#include <iostream>
#include <set>
#include <string>
#include <iterator>

using namespace std;


int main(){

	set<string> conjunto;

	// Se inicializan los iteradores con cin (entrada estandar).
	// El programa puede recibir datos a partir de un paid que vaya leyendo lo que viene
	// de otro comando linux:
	istream_iterator<string> it {cin};
	istream_iterator<string> end;

	// Con un par de iteradores de inicio y fin, que representan la entrada del usuario, podemos
	// llenar el conjunto con inserter.
	copy(it, end, inserter(conjunto, conjunto.end()));

	// Lo parametros que recibe inserter son el conjunto y el iterador al final para indicar donde hay que
	// insertar el nuevo elemento.


	// Como el conjunto no admite repetidos, actua de filtro para todos los valores:
	cout << "Datos filtrados:" << endl;

	for (const auto &w : conjunto)
		cout << w << endl;


	// PARA PROBAR ESTE PROGRAMA PODEMOS HACER: 
	echo "1 2 3 4 a vv vv a 2 ff" | ./programa

	/* Explicacion para el metodo copy:
	copy(input_iterator_begin, input_iterator_end, insert_iterator);

	
	Esta llamada extrae el token de la siguiente palabra de std :: cin a través del iterador de entrada y lo inserta en
	nuestro std :: set. Luego, incrementa ambos iteradores y verifica si la entrada
	iterador es igual a la contraparte del iterador final de entrada. Si no es así, todavía hay palabras
	dejado en la entrada estándar, por lo que se repetirá.
	Las palabras duplicadas se descartan automáticamente. Si el conjunto ya contiene una palabra específica,
	agregarlo nuevamente no tiene ningún efecto. Esto sería diferente en un std :: multiset ya que, por el contrario,
	aceptaría duplicados.*/
}
