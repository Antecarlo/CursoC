// Lista.h: interface for the Lista class.
//
//////////////////////////////////////////////////////////////////////

#ifndef LISTA_H
#define LISTA_H

#define NO_EXISTE -32767

template<class T>class Lista {

private:

	class Nodo {
		private:
			T dato;
			Nodo *sig;

		public:
			Nodo(){ this->dato = 0; this->sig = 0; }
			Nodo(T dato, Nodo *dir){ this->dato = dato; this->sig = dir; }
			
			T getDato(){ return this->dato; }
			Nodo *getSig(){ return this->sig; }

			void setDato(T dato){ this->dato = dato; }
			void setSig(Nodo *sig){ this->sig = sig; }
			
			virtual ~Nodo(){}

	};
	Nodo *lista;

public:
	Lista();
	void insertar(T);
	bool eliminar(T);
	bool existe(T);
	bool vacia();
	T get(int);
	void set(int, T);
	int numeroElementos();
	void borrarTodos();
	void imprime();
	virtual ~Lista();

};
#endif 


template <class T> Lista<T>::Lista(){
	lista = 0;
}


template <class T> void Lista<T>::insertar(T dato){
	Nodo *aux;

	aux = new Nodo(dato, lista);
	this->lista = aux;
}

template <class T> bool Lista<T>::eliminar(T dato){
	// Devuelve true si lo ha conseguido borrar:
	Nodo *aux = this->lista;
	Nodo *ant = 0;
	

	while (aux != 0 && (aux->getDato() != dato)){
		ant = aux;
		aux = aux->getSig();
	}

	if (aux != 0){
		// Es el primero:
		if (ant == 0)
			lista = lista->getSig();
		else
			ant->setSig(aux->getSig());

		delete aux;
		return true;

	} else
		return false;
}

template <class T> bool Lista<T>::existe(T dato){
	
	bool encontrado = false;
	Nodo *aux = this->lista;

	while (aux != 0 && !encontrado){
		encontrado = (aux->getDato() == dato);
		aux = aux->getSig();
	}
	return encontrado;
}

template <class T> bool Lista<T>::vacia(){
	return this->lista == 0;
}

template <class T> T Lista<T>::get(int i){
	// Considerando que el primer nodo es el 0.
	Nodo *aux = this->lista;
	int cuenta = 0;

	while (aux != 0 && cuenta != i){
		aux = aux->getSig();
		cuenta++;
	}

	if (aux != 0)
		return aux->getDato();
	else
		return NO_EXISTE;

}

template <class T> void Lista<T>::set(int i, T dato){
	// Considerando que el primer nodo es el 0.
	Nodo *aux = this->lista;
	int cuenta = 0;

	while (aux != 0 && cuenta != i){
		aux = aux->getSig();
		cuenta++;
	}

	if (aux != 0)
		aux->setDato(dato);
}

template <class T> int Lista<T>::numeroElementos(){
	int cuenta = 0;
	Nodo *aux = this->lista;


	while (aux != 0){
		cuenta++;
		aux = aux->getSig();
	}
	return cuenta;
}

template <class T> void Lista<T>::borrarTodos(){
	
	Nodo *aux;

	while (lista != 0){
		aux = lista;
		lista = lista->getSig();

		delete aux;
		aux = 0;	
	}
}

template <class T> void Lista<T>::imprime(){
	Nodo *aux = this->lista;


	while (aux != 0){
		cout << aux->getDato() << " ";
		aux = aux->getSig();
	}
}

template <class T> Lista<T>::~Lista(){

	this->borrarTodos();
}
