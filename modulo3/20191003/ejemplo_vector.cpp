/*

Ejemplo de uso de la clase vector

*/

#include <vector>
#include <string>
#include <iostream>
#include<algorithm>

void test_int(){

	// Definir e inicializar
	std::vector<int> v1 = {1,2,2,34,5,6,7,8};

	//Solo definir con un tamaño 
	std::vector<int> v2(5,-100);

	// Aplicar metodos:
	std::cout << "v1 tiene " << v1.size() << " elementos" <<std::endl;
	std::cout << "v2 tiene " << v2.size() << " elementos" <<std::endl;

	std::cout << "V1: " << std::endl;
	for (int i=0; i<v1.size(); i++)
		std::cout << v1[i] << " " << v1.at(i) << std::endl;

	std::cout <<std::endl;
	std::cout << "V2: " << std::endl;
	for (int item:v2) //Recorre los elementos de v2 y los deja en item
		std::cout << item << std::endl;

	//Modificar los elementos del vector en el mismo bucle:
	//Recorre el vector y recupera una referencia a cada uno de los elementos
	for (auto & item :v1){
		item+=10;
		std::cout << item <<std::endl;
	}

	std::cout <<std::endl;
	std::cout << "Despues de modificar v1+10 " << std::endl;	
	for (auto i:v1)
		std::cout << i <<std::endl;

	std::cout <<std::endl;
	std::cout << "V2: con auto " << std::endl;
	for (auto item:v2)
		std::cout << item << std::endl;
}

void test_string(){
	std::vector <std::string> nombres = {"Ana","Olga","Raquel"};

	for (auto s:nombres)
		std::cout << s << std::endl;

	nombres.push_back("Alberto");
	nombres.push_back("Alberto");

	std::cout << "Despues de modificar el vector de strings:" << std::endl;
	for (auto s:nombres)
		std::cout << s << std::endl;
	
}

void test_matriz(){
	int filas =4, col=6;
	int n=1;
	std::vector<std::vector<int>> matriz;


	for (int i=0;i<filas;i++){
		std::vector<int> fila;
		for(int j=0; j<col;j++,n++)
			fila.push_back(n);

		matriz.push_back(fila);
	}

	for(int i=0; i<filas; i++){
		for(int j=0;j<col;j++,n++)
			std::cout << matriz[i][j] << "\t";
		std::cout << std::endl;
	}
}

void test_matriz2(){
	int filas =4, col=6;
	int n=1;
	std::vector<std::vector<int>> matriz(filas);


	for (int i=0;i<filas;i++){
		std::vector<int> fila(col);
		for(int j=0; j<col;j++,n++)
			fila[j]=n;

		matriz[i]=fila;
	}

	for(int i=0; i<filas; i++){
		for(int j=0;j<col;j++,n++)
			std::cout << matriz[i][j] << "\t";
		std::cout << std::endl;
	}

}

void test_matriz3(){

	std::vector<std::vector<int>> matriz = {{1,2,3},{4,5,6},{7,8,9}};

	for (int i=0;i<matriz.size();i++){
		for(int j=0; j<matriz[i].size();j++)
			std::cout << matriz[i][j] << "\t";
		std::cout << std::endl;
	}
}

void test_matriz4(){
	int filas =4, col=6;
	int n=1;
	std::vector<std::vector<int>> matriz(filas,std::vector<int>(col));


	for (int i=0;i<filas;i++){
		for(int j=0; j<col;j++,n++)
			matriz[i][j]=n;

	}

	for(int i=0; i<filas; i++){
		for(int j=0;j<col;j++,n++)
			std::cout << matriz[i][j] << "\t";
		std::cout << std::endl;
	}

}

void test_find_vector(){
	std::vector<int> v = {5,7,6,4,3,2,1,9,0};

	auto index = std::find(std::begin(v),std::end(v),9);

	if (index!=std::end(v)){
		std::cout << "Encontrado " << std::endl;
		std::cout << * index << std::endl;
	}else
		std::cout << "No existe " << std::endl;
}

void test_iterators(){
	std::vector<int> v= {1,2,3,4,5,6,3,6,5,3,4,3};
	std::vector<int>::iterator it;
	std::vector<int>::reverse_iterator it2;

	//Recorrer un vector con un iterador
	std::cout << "TODO EL VECTOR" << std::endl;
	for(it = v.begin();it !=v.end();it++)
		std::cout << * it << std::endl;

	std::cout << "saltar los 3 primeros del vector: " << std::endl;
	for(it = v.begin()+3;it !=v.end();it++)
		std::cout << * it << std::endl;

	std::cout << "TODO EL VECTOR AL REVES" << std::endl;
	for (it2 = v.rbegin(); it2 !=v.rend();it2++)
		std::cout << * it2 << std::endl;

	auto item = std::find(v.begin(),v.end(),3);
	if (item !=v.end()){
		int index = std::distance(v.begin(),item);
		std::cout << "Valor encontrado en pos " <<index<< std::endl;
	}
}

void buscarElementos(){
	std::vector<int> v= {1,2,3,4,5,6,3,6,5,3,4,3};
	std::vector<int> pos;
	

	//Buscar un valor (por ej. el 3) e imprimir todas las posiciones donde existe. Utilizando find
	int i=0;
	std::vector<int>::iterator item2;
	do{
		item2 = std::find(v.begin()+i,v.end(),3);
		if(item2!=v.end()){
			int pos= std::distance(v.begin(),item2);
			std::cout << "Encontrado el 3 en pos =" << pos << std::endl;
			i= pos+1;
		}
	}while(item2!=v.end());



}

int main(){

	//test_int();
	//test_matriz();
	//test_matriz2();
	//test_matriz3();
	//test_matriz4();
	//test_find_vector();	
	//test_iterators();
	buscarElementos();
}



	/*
	//int i=0;
	do{
	auto item = std::find(v.begin()+i,v.end(),3);

	if (item !=v.end()){
		int index = std::distance(v.begin(),item);
		std::cout << "Valor encontrado en pos " <<index+i<< std::endl;
		pos.push_back(index+i);
		i+index;
	}
	}while(item !=v.end());	
	*/

