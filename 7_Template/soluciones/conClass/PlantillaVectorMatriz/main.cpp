#include <iostream>
#include <iomanip>
#include <string>

#include "vector.h"
#include "vector.cpp"

#include "matriz2d.h"
#include "matriz2d.cpp"

using namespace std;


int main(){

	// Prueba de la plantilla Vector<T>	
	Vector<double> vector(5);
  
  	for (int i = 0; i < vector.longitud(); i++)
    	vector[i] = i+1;


	for (int i=0 ; i < vector.longitud() ; i++)
		cout << vector[i] << "\t";

	cout << endl << endl;


	// Prueba de la plantilla Matriz2D<T>
	
	Matriz2D<int> matriz(5, 8);
	int f = matriz.getFilas();
	int c = matriz.getCols();

	cout << "Filas: " << f << endl;
	cout << "Cols: " << c << endl;
	
	
	for (int i = 0; i < f ; i++ )
		for (int j = 0; j < c ; j++)
			matriz(i,j) = i;

	for (int i = 0; i < f ; i++ ){
		for (int j = 0; j < c ; j++)
				cout << matriz(i,j) << "\t";
		cout << endl;
	}

}

