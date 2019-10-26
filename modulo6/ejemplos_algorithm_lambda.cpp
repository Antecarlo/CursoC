/*

Funciones de algorithm: count_if, find_if, etc con funciones lambda

*/

#include<iostream>
#include<functional>
#include<string>
#include<algorithm>
#include<vector>

void contar_si(int a, int b){
	//Definir e inicializar un vector. Contar los valores que estan dentro de un rango especificado
	std::vector<int> numeros= {1,6,9,3,72,25,38,49,96,6,78,3,4,234,756,21,45,645};

	auto condicion = [a,b](int i){return i>=a && i<=b;};

	//int n = std::count_if(numeros.begin(),numeros.end(),[a,b](int i){return i>=a && i<=b;});
	int n = std::count_if(numeros.begin(),numeros.end(),condicion);
	std::cout << "Numeros en el rango: "<<n<<std::endl;
}

void encontrar_si(){
	//Buscar el primer numero par
	std::vector<int> numeros= {1,6,9,3,72,25,38,49,96,6,78,3,4,234,756,21,45,645};
	auto condicion = [](int i){return i%2==0;};
	auto n = std::find_if(numeros.begin(),numeros.end(),condicion);
	std::cout << "Primer numero par: "<<* n<<" en la posicion "<<std::distance(numeros.begin(),n) <<std::endl;
}

void copiar_si(){
	//Buscar impares
	std::vector<int> numeros= {1,6,9,3,72,25,38,49,96,6,78,3,4,234,756,21,45,645};
	std::vector<int> impares;

	//auto condicion = [](int i){return i%2!=0;};
	std::copy_if(numeros.begin(),numeros.end(),std::back_inserter(impares),[](int i){return i%2!=0;});

	std::cout << "Numeros impares"<<std::endl;
	for(auto i : impares)
		std::cout <<i<<" ";
	std::cout<<std::endl;
}


int main(){


	//contar_si(10,50);
	//encontrar_si();
	copiar_si();
}



