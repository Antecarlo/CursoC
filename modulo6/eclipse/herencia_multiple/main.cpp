/*
 * Main file
 *
 */

#include "Hora.h"
#include "Fecha.h"
#include "FechaHora.h"

#include<iostream>
#include<list>
#include<vector>
#include<algorithm>

void ordenar(int * p, int n){
	std::sort(p,p+n,[](int a, int b){return std::abs(a)< std::abs(b);});
}

void ordenar(Fecha *f, int n){
	std::sort(f,f+n,[](Fecha f1, Fecha f2){return f1< f2;}); //Tenemos definido el operador < en Fecha
}

void imprimir(std::list<Fecha> v){
	for (auto i:v)
		std::cout << i << " ";
	std::cout << std::endl;
}

void ordenarListaFechaHoras(){
	//std::list<Fecha> fechas = {{4,1,2020},{6,7,2019},{8,9,2002}};
	std::list<Fecha> fechas;
	//std::vector<Fecha> fechas;
	fechas.push_back(Fecha(4,1,2020));
	fechas.push_back(Fecha(6,7,2019));
	fechas.push_back(Fecha(8,9,2002));
	imprimir(fechas);

	fechas.sort();
	//std::sort(fechas.begin(),fechas.end()); ERROR con list
	imprimir(fechas);
}

int main(){
	//ordenarListaFechaHoras();
	int numeros[]={9,-4,8,-15,3,-1,4,3,9,21,-5};
	ordenar(numeros,9);
	for(int i=0;i<11;i++)
		std::cout << numeros[i]<<" "<< std::endl;

	//Declarar y ejecutar la lambda
	std::cout <<"Lambda menor:  "<< [](int a, int b){return (a<b)?a:b;}(55,44)<< std::endl;
	auto f = [](int a, int b){return (a<b)? a:b;};
	//std::cout <<"Lambda menor:  "<< f(55,44)<< std::endl;

	//Ordenar fechas con sort y lambda function
	//Fecha fechas[]={Fecha(4,1,2020),Fecha(6,7,2019),Fecha(8,9,2002)};
	Fecha fechas[]={{4,1,2020},{6,7,2019},{8,9,2002}};
	ordenar(fechas,3);
	for(auto f:fechas)
		std::cout << f <<std::endl;

}
