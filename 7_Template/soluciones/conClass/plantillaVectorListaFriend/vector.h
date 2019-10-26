#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;


template <class T> class Vector;
template <class T> void imprimir(const Vector<T> &);

template <class T> class Vector
{
	friend void imprimir<T>(const Vector<T> &);
	
	
	private:
		T *v;
		int n;
		int indice;
		
	public:
		Vector(int=10);
		Vector(const Vector &);
		Vector &operator=(const Vector &);
		void imprimir();
		bool add(T numero);
		inline void set(int pos, T numero){ v[pos] = numero;}
		inline int longitud(){ return indice; }
		inline const T *elementos(){ return v;}
		~Vector();
	protected:
};

#endif




