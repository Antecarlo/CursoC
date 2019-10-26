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



