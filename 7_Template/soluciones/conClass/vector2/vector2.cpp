#include <iostream>
#include <stdexcept>
using namespace std;

#include "vector2.h"

template <class T> int Vector2<T>::instancias=0;

template <class T> Vector2<T>::Vector2(int n)
{
	this->n = n;
	this->pos=0;
	this->ptr = new T[n];
	
	Vector2<T>::instancias++;
}

template <class T> Vector2<T>::Vector2(const Vector2<T> &v){
	this->copiar(v);
	
	Vector2<T>::instancias++;
}

template <class T> int Vector2<T>::getInstancias(){
	return Vector2<T>::instancias;
}

template <class T> Vector2<T> &Vector2<T>::operator=(const Vector2<T> &v){
	delete [] this->ptr;
	this->copiar(v);		
	return *this;
}

template <class T> void Vector2<T>::copiar(const Vector2<T> &v){
	this->n = v.n;
	this->pos = v.pos;
	this->ptr = new T[v.n];
	
	for (int i = 0 ; i < v.pos ; i++)
		this->ptr[i]=v.ptr[i];
}

template <class T> bool Vector2<T>::add(T d){
	if (pos < n){
		ptr[pos] = d;
		pos++;
		return true;
	} else
		return false;
}

template <class T> void Vector2<T>::imprimir() const {
	for (int i = 0 ; i < pos ; i++)
		cout << ptr[i] << " ";	
}

template <class T> T Vector2<T>::get(int i) const {	
	if (i <= pos)
		return ptr[i];
	else // Lanzar exception
		throw out_of_range("Fuera de rango");
}

template <class T>  void Vector2<T>::set(int i, T d){
	if (i <= pos)
		ptr[i]=d;
}

template <class T> int Vector2<T>::size() const {
	return pos;
}

template <class T> Vector2<T>::~Vector2()
{
	delete [] ptr;
	ptr=0;
}
