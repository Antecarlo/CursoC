
/*
STL: Ejemplo de relleno de List y se pasa luego a un map

*/

#include <map>
#include <list>
#include <iostream>
#include <string>

using namespace std;

// Definimos una estructura para almacenar los datos:

struct millonario {
	string nombre;
	double dinero;
	string pais;
};

int main(){
	list<millonario> lista = {{"Bill Gates", 86.0, "USA"},{"Warren Buffet", 75.6, "USA"},{"Jeff Bezos", 72.8, "USA"},
				{"Amancio Ortega", 71.3, "Spain"},{"Mark Zuckerberg", 56.0, "USA"},{"Carlos Slim", 54.5, "Mexico"},
				{"Bernard Arnault", 41.5, "France"},{"Liliane Bettencourt", 39.5, "France"},
				{"Wang Jianlin", 31.3, "China"},{"Li Ka-shing", 31.2, "Hong Kong"}};

	
	// El objetivo organizar un mapa, con los millonarios por pais:
	// La clave el pais, y el valor un par con una copia cte de la struct del millonario y el tamaño, el numero de millonarios.
	map<string, pair<const millonario, size_t> > mapa;
	
	for (const auto &b : lista) {
		// try_emplace comprueba si la clave existe, la inserta si no existe. Si existe no hace nada.
		// La primera vez que inserta el elemento en el mapa lo inicializa a 1 (es el contador).
		// Al devolver success == false, sabemos que la clave ya existía, entonces incrementa el contador.
		auto [iterator, success] = mapa.try_emplace(b.pais, b, 1);

		// El primer second representa el segundo campo del mapa, y como es un par, se vuelve a obtener el segundo campo del par!
		if (!success) iterator->second.second++;
	}

	for (const auto & [key, value] : mapa) {
		const auto &[b, count] = value;
		cout << b.pais << " : " << count << " millonario mas rico, es: " << b.nombre << " con " << b.dinero << " B$\n";
	}
}
