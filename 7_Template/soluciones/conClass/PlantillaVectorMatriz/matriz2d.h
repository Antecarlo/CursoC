#ifndef MATRIZ2D

#define MATRIZ2D
#include "vector.h"

template <class T> class Matriz2D : public Vector<T> {

private:
	T **matriz;
	int cols;

public:
	Matriz2D(int f = 5, int c = 5);
	inline int getFilas() const { return Vector<T>::longitud(); }  // Llama a la clase Padre:
	inline int getCols() const { return cols; }
	T& operator()(int f, int c);
	virtual ~Matriz2D();
};
#endif 
