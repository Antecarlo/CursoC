#include "tupla.h"

template<class T>Tupla<T>::Tupla()
{
}

template<class T> T Tupla<T>::get(int i){
	return (i==0) ? a : b;
}

template<class T> void Tupla<T>::set(int index, T v){
	if (index == 1)
		a = v;
	else
		b = v;
}

template<class T>Tupla<T>::~Tupla()
{
}
