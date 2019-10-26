#include "vector.h"
#include <iostream>
using namespace std;


template <class T> void imprimir(const Vector<T> &vec)
{
	cout << "En imprimir" << endl;
	for (int i = 0 ; i < vec.indice ; i++)
		cout << vec.v[i] << " " << endl;
}

template <class T> Vector<T>::Vector(int n)
{
	this->n = n;
	this->indice = 0;
	this->v = new T[n];
}

template <class T> Vector<T>::Vector(const Vector<T> &otro)
{
	this->n = otro.n;
	this->indice = otro.indice;
	this->v = new T[otro.n];
	for (int i = 0 ; i < otro.indice ; i++)
		this->v[i] = otro.v[i];
	//*this = otro; // llamada al operator =
}
		
template <class T> Vector<T> & Vector<T>::operator=(const Vector<T> &otro)
{
	// Copiar todos los att. en this
	this->n = otro.n;
	this->indice = otro.indice;
	// liberar antes de reservar

	delete []this->v;
	// Reservar y copiar lo del otro:
	this->v = new T[otro.n];
	for (int i = 0 ; i < otro.indice ; i++)
		this->v[i] = otro.v[i];
	return *this;
}
		
template <class T> void Vector<T>::imprimir()
{
	for (int i = 0 ; i < indice ; i++)
		cout << v[i] << " ";
	cout << endl;
}		
template <class T> bool Vector<T>::add(T numero)
{
	if (indice < n){
		v[indice++] = numero;
		//indice++;
		return true;
	} else
		return false;
}
template <class T> Vector<T>::~Vector()
{
	delete [] v;
}
