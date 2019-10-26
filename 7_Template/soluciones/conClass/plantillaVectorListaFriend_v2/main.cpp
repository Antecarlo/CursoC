#include <iostream>
#include "vector.h"
#include "vector.cpp"
#include "lista.h"
#include "lista.cpp"
using namespace std;

void pruebaLista();

int main(int argc, char** argv) {
	//pruebaVector();
	pruebaLista();
}
void pruebaLista(){
	Lista<int> pila;	
	pila.add(8);
	pila.add(3);
	pila.add(2);
	pila.add(30);
	pila.add(20);
	pila.borrar(100);
	pila.imprimir();
	pila.borrar(4);
	pila.imprimir();
	pila.borrarTodos();	
	pila.imprimir();
}
void pruebaVector(){
	Vector<int> v;
	Vector<int> *v2 = new Vector<int>();
	
	
	for (int i = 0 ; i < 10  ; i++){
		v.set(i,i);
		v2->set(i,i);
	}
		
	imprimir(v);
	imprimir(*v2);
	delete v2;
}
