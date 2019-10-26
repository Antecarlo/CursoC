#include "lista.h"

template <class T> void Lista<T>::add(T dato)
{
	Nodo *nuevo;
	nuevo = new Nodo(dato);
	nuevo->setSig(cabeza);
	cabeza = nuevo;
}

template <class T> bool Lista<T>::borrar(int pos)
{
	Nodo *aux = cabeza;
	Nodo *ant = NULL;
	
	while (aux != NULL && pos > 0){
		// Avanzar los dos punteros:
		ant = aux;
		aux = aux->getSig();
		pos--;
	}
	// Comprobar si existe pos, y comprobar los punteros.
	if (pos > 0)
		return false; // no existe esa posicion
	else {
		// Borrar el primero:
		if (aux == cabeza)
			cabeza = cabeza->getSig();

		// El ultimo y en medio	
		else
			ant->setSig(aux->getSig());

		delete aux;	
		return true;
	}
}

template <class T> void Lista<T>::borrarTodos(){
	while (cabeza != NULL)
		borrar(0);
}

template <class T> void Lista<T>::imprimir()
{
	Nodo *aux = cabeza;
	cout << "[";
	while (aux != NULL){
		cout << aux->getDato() << " ";
		// Avanzar al siguiente nodo:
		aux=aux->getSig();
	}
	cout << "]" << endl;
}

template <class T> Lista<T>::~Lista()
{
	borrarTodos();
}
