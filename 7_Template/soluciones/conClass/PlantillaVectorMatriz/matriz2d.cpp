#include "vector.h"
#include "matriz2d.h"

// Las filas me las proporciona la clase Vector, y desde mi constructor llamo al Padre (Vector).
template <class T> Matriz2D<T>::Matriz2D(int f, int c) : Vector<T>(f){
	// Constructor:

	// Asigno las columnas:
	cols = c;

	// Asigno el puntero al primer elemento de la clase padre:
	//matriz = reinterpret_cast<T **>(&(Vector<T>::operator [](0)));
	matriz = new T *[f];
		
	// Tenemos que crear las columnas para el número de filas:
	for (int i = 0 ; i < f ; i++)
		matriz[i] = Vector<T>::asignarMem(cols);
				
}


template <class T> Matriz2D<T>::~Matriz2D(){
	
	// Elimina la memoria reservada:
	for (int i=0 ; i < this->getFilas() ; i++)
		delete [] matriz[i];
		
	delete [] matriz;
}


template <class T> T& Matriz2D<T>::operator()(int f, int c){
	return matriz[f][c];
}


