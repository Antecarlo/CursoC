// vector.h - Plantilla de clase Vector
#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cstdlib>
using namespace std;

template<class T> class Vector // declaración
{
  private:
    T *vector; // puntero al primer elemento de la matriz
    int nElementos; // número de elementos de la matriz

  protected:
    T *asignarMem(int);

  public:
    Vector(int ne = 10); // crea un Vector con ne elementos
    Vector(const Vector&); // crea un Vector desde otro
    ~Vector() { delete [] vector; vector = 0; } // destructor
    Vector& operator=(const Vector&);
    T& operator[](int i) const { return vector[i]; }
    int longitud() const { return nElementos; }
};

#endif // _VECTOR_H_
