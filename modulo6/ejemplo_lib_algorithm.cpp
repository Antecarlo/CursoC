/*

Pruebas con la libreria algorithm

*/

#include<vector>
#include <string>
#include <algorithm>
#include <iostream>

void prueba_count(){
	std::vector<int> numeros={1,2,4,5,6,5,4};
	
	std::cout << "Contar el 4: " << std::count(numeros.begin(),numeros.end(),4)<< std::endl;


	int num2[] = {1,2,4,5,6,5,4}; //array normal
	std::cout << "Contar el 4: " << std::count(num2, num2+7,4) << std::endl;

}

void prueba_find_position(){
	//Localizar un elemento con find y calcular la posicion que ocupa
	std::vector<int> numeros={1,2,4,5,6,5,4};
	std::cout << std::distance(numeros.begin(),numeros.end()) << std::endl;
 
	auto it= std::find(numeros.begin(),numeros.end(),5);
	if(it==numeros.end()){
		std::cout << "El numero no existe" << std::endl;
	}else{
		std::cout << "Posicion: " << std::distance(numeros.begin(),it) << std::endl;
	}
}

void imprimir(auto v){
	for (auto num : v)
		std::cout << num << " ";
	std::cout << std::endl;	
}

void imprimir(int * p, int n){
	for (int i=0;i<n;i++){
		std::cout << p[i] << " ";
	}
	std::cout << std::endl;	
}


void prueba_sort(){
	//Para ordenar colecciones
	std::vector<int> numeros ={1,2,4,5,6,5,4,2,1,20};
	std::sort(numeros.begin(),numeros.end());
	imprimir(numeros);

	std::sort(numeros.begin(),numeros.end(),std::greater<int>());
	imprimir(numeros);

	int num2[]={77,6,5,4,33,1,0};
	int tam= sizeof(num2)/sizeof(int);
	std::sort(num2,num2+tam);
	imprimir(num2,tam);
}


int main(){
	//prueba_count();

	//prueba_find_position();

	prueba_sort();
}
