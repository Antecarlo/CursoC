#include "vector.h"
#include <iostream>

using namespace std;

template <class T> Vector<T>::Vector(int n)
{
	this->n = n;
	this->index = 0;
	this->v = new T[n];	
}

template <class T> Vector<T>::Vector(const Vector &obj):Vector(0)
{
	*this = obj; // Llama al operador =
}
template <class T> Vector<T> & Vector<T>::operator=(const Vector &obj)
{

	delete [] this->v;
		
	this->v = new double[obj.n];
	
	this->n = obj.n;
	this->index = obj.index;
	for (int i = 0 ; i < this->index ; i++)
		this->v[i] = obj.v[i];
		
	return *this;
}

template <class T> bool Vector<T>::add(T item)
{
	if (this->index < this->n){
		this->v[this->index] = item;
		this->index++;
		return true;
		
	} else
		return false;
}

template <class T> void Vector<T>::ordenar()
{
	T aux;
	
	for (int i = 0 ; i < n-1 ; i++)
		for (int j = i+1 ; j < n ; j++)
			if (v[i]>v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}

template <class T> void Vector<T>::println()
{
	cout << "[";
	for (int i = 0 ; i < this->index ; i++)
		cout << this->v[i] << " ";
	cout << "]" << endl;
}

template <class T>  Vector<T>::~Vector()
{
	delete [] this->v;
}
