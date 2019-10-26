/*

Aportaciones de C++ a C, parametros opcionales

*/


#include<iostream>
#include<string>

/*
void imprimir(std::string,int=1); //Si pasamos el segundo parametro se sobreescribe el 1 y si no es 1 por defecto
*/

void imprimir(std::string="hola",int=1); //Ahora con dos parametros opcionales

int main(){
	imprimir("Hola");
	imprimir("Hola",5);
	imprimir();
}



void imprimir(std::string cadena,int repeticiones){

	for(int i=0;i<repeticiones;i++)
		std::cout <<cadena << std::endl;

	std::cout<<std::endl;
}

