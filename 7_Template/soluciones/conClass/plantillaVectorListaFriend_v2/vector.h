#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;


template <class T> class Vector
{
	
	template <class T1> friend void imprimir(const Vector<T1> &vec)
	{
		for (int i = 0 ; i < vec.n ; i++)
			cout << vec.v[i] << endl;
	}
	
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




