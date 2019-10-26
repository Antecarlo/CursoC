/*

13_STL unordered_map, cuando tenemos elementos que no podemos decir si uno es mayor que otro

Es cuando la clave representa un tipo personalizado y no tiene sentido decir si es mayor o menor que otro.
En estos casos podemos utilizar unordered_map y nos hace falta el operador == en nuestro tipo.

*/

#include <unordered_map>
#include <iostream>

//using namespace std;

struct coord {
	int x;
	int y;
};


bool operator==(const coord &a, const coord &b){

	return a.x == b.x && a.y == b.y;
}

/*

	Se puede abrir el namespace de STD y ampliar las posibilidades del Hash.
	Y  crear nuestra propia especializacion de estructura de plantilla std :: hash

*/

namespace std {

	template <> struct hash<coord> {
		using argument_type = coord;
		using result_type = size_t;

		// Hace las veces de funcion hash
		result_type operator()(const argument_type &c) const {
			return static_cast<result_type>(c.x) + static_cast<result_type>(c.y);
		}
	};
}


int main(){
	std::unordered_map<coord, int> m { {{0, 0}, 1}, {{0, 1}, 2}, {{2, 1}, 3}};

	for (const auto & [key, value] : m) {
		std::cout << "{(" << key.x << ", " << key.y << "): " << value << "} ";
	}
	std::cout << '\n';
}
		




