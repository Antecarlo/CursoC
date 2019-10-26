#include <iostream>

#include "VectorPlano.h"
#include "VectorPlanoII.h"

#include <iostream>
using namespace std;

int main(){

	VectorPlano v1(3,4), v2(8,7);

	cout << "La norma del vector (3,4) es: " << v1.magnitud() << endl;
	cout << "El producto de los vectores (3,4) y (8,7) es : " << v1.prod(v2) << endl;

	VectorPlanoII v3(3,4), v4(8,7);

	cout << "La norma del vector (3,4) es: " << v3.magnitud() << endl;
	cout << "El producto de los vectores (3,4) y (8,7) es : " << v3.prod(v4) << endl;
	return 0;
}

