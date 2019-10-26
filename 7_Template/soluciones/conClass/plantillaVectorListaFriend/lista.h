#ifndef LISTA_H
#define LISTA_H

#include <cstdlib>
#include <iostream>
using namespace std;

template <class T> class Lista
{
	private:
		class Nodo {
			T dato; // Sera de tipo T
			Nodo *sig;			
			public:
				Nodo(int n)	{
					this->dato = n;
					this->sig=NULL;// 	
				}
				inline T getDato(){ return dato; }
				inline void setDato(T dato){ this->dato=dato;}
				inline Nodo *getSig(){ return this->sig; }
				inline void setSig(Nodo *sig){ this->sig=sig;}
				~Nodo(){}
				
		};
		Nodo *cabeza;
	public:
		Lista(){ cabeza = NULL;} // La lista se crea vacia.}
		void add(T dato); // Añade un dato a la lista
		void imprimir();
		bool borrar(int pos);
		//bool borrar(T item);
		void borrarTodos();
		~Lista();
	protected:
};

#endif


