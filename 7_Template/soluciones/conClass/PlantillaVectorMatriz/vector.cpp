// vector.cpp - Definici�n de la plantilla Vector

#include "vector.h"

// Crear una matriz con ne elementos
template<class T> Vector<T>::Vector(int ne){

  if (ne < 1){
    cerr << "N� de elementos no v�lido: " << ne << "\n";
    return;
  }
  nElementos = ne;
  vector = asignarMem(nElementos);
}

// Constructor copia
template<class T> Vector<T>::Vector(const Vector& v) : vector(0){
  *this = v;
}

// Operador de asignaci�n
template<class T> Vector<T>& Vector<T>::operator=(const Vector& v){

  nElementos = v.nElementos;            // n�mero de elementos
  delete [] vector;                     // borrar la matriz actual
  vector = asignarMem(nElementos);      // crear una nueva matriz
  for (int i = 0; i < nElementos; i++)
    vector[i] = v.vector[i];            // copiar los valores
  return *this;           // permitir asignaciones encadenadas
}

// Otros m�todos
template<class T> T *Vector<T>::asignarMem(int nElems){
  
	try  {
    T *p = new T[nElems];
    return p;

  }  catch(bad_alloc e) {
    cout << "Insuficiente espacio de memoria\n";
    exit(-1);
  }
}



