#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

#include "hora.h"
#include "vector.h"
#include "vector.cpp"

template <class T> T menor(T a, T b){
	return (a < b) ? a : b;
}

template <class T> void imprimir(T *v, int n){
	for (int i = 0 ; i < n ; i++)
		cout << v[i] << " ";
	cout << endl;
}

template <class T> void ordenar(T *v, int n){
	T aux;
	
	for (int i = 0 ; i < n-1 ; i++)
		for (int j = i+1 ; j < n ; j++)
			if (v[i]>v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}

void pruebaFunciones(){
	int m1 = menor(12, 56);
	cout << "m1: " << m1 << endl;
	
	double m2 = menor(0.12, 0.56);
	cout << "m2: " << m2 << endl;
	
	string m3 = menor(string("12"), string("56"));
	cout << "m3: " << m3 << endl;
	
	Hora m4 = menor(Hora(1,2,4), Hora(3,44,8));
	cout << "m4: " << m4 << endl;
	
	cout << "Hora: " << sizeof(Hora) << " bytes" << endl;
	
	int numeros[] = {1,6,3,2,1};
	ordenar(numeros, sizeof(numeros)/sizeof(int));
	imprimir(numeros, sizeof(numeros)/sizeof(int));
	
	Hora horas[] = {Hora(23,44),Hora(18,6,33), Hora(9,5,7)};
	ordenar(horas, sizeof(horas)/sizeof(Hora));
	imprimir(horas, sizeof(horas)/sizeof(Hora));
}

void pruebaClases(){
	Vector<int> v1(10);
	Vector<Hora> v2(6);
	Vector<string> v3(3);
	
	v3.add("ZXC");
	v3.add("VBA");
	v3.add("BOSS");
	
	v3.println();
	v3.ordenar();
	v3.println();
	
	for (int i = 10 ; i > 0 ; i--)
		v1.add(i+1);
	v1.println();
	v1.ordenar();
	v1.println();	
	
	srand(time(NULL));
	
	for (int i = 0 ; i < 6 ; i++)
		v2.add(Hora(rand()%24, rand()%60, rand()%60));
	v2.println();
	v2.ordenar();
	v2.println();
}

int main(){
	//pruebaFunciones();
	pruebaClases();
}
