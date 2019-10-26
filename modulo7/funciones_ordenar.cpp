/*

Ejemplo de plantillas genericas

*/

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <limits>


//Funcion para intercambiar dos valores

template <class C> void intercambiar (C &a, C &b){
	C aux = b;
	b=a;
	a=aux;
}

//Funcion para ordenar un array

template <class C> void ordenarmM (C conjunto, int n){

	for (int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(conjunto[i]>conjunto[j])
				intercambiar(conjunto[i],conjunto[j]);
}

template <class C> void ordenarMm (C conjunto, int n){

	for (int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(conjunto[i]<conjunto[j])
				intercambiar(conjunto[i],conjunto[j]);
}


// Imprimir 
void imprimir(auto vector,int n){
	for (int i=0;i<n;i++)
		std::cout << vector[i] << " ";
	std::cout << std::endl;
}

/*
template <class T> void imprimir(T *v, int tam){
	for (int i=0;i<tam;i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}
*/

//Imprimir el valor maximo y minimo de un tipo:
template <typename T> void limites (const char *mensaje){
	std::cout << "TIPO: " << mensaje << std::endl;
	std::cout << "Min: " << std::numeric_limits<T>::min() << std::endl;
	std::cout << "Max: " << std::numeric_limits<T>::max() << std::endl;
}

int main(){

	int numeros[]={4,6,5,4,3,2};
	std::string nombres[]={"Ana","Eva","Miguel","Sandra"};
	double numD[]={2.45,7.65,76.82,1563.54,-354.6,-5,-9,4,0};
	
	int n1= sizeof(numeros)/sizeof(int);
	ordenarMm(numeros,n1);
	imprimir(numeros,n1);

	int n2= sizeof(nombres)/sizeof(std::string);
	ordenarmM(nombres,n2);
	imprimir(nombres,n2);

	int n3= sizeof(numD)/sizeof(double);
	ordenarMm(numD,n3);
	imprimir(numD,n3);

	limites<int>("int");
	limites<double>("double");
	limites<float>("float");
	limites<unsigned>("unsigned");
	limites<long int>("long int");


	

	

}

