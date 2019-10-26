/*

Aportaciones de C++ a C, sobrecarga de funciones

*/


#include<iostream>
#include<string>

//Sobrecargar funciones

void funcion1(int);
void funcion1(int,int);

//Dependiendo de los parametros que le pasemos se ejecutara una funcion u otra

void funcion1(std::string);



int main(){

	funcion1(8);
	funcion1("8");
	funcion1(1,2);
}

void funcion1(int n){
	std::cout << "n: " << n << std::endl;
}

void funcion1(int a,int b){
	std::cout << "2 int: " << a << "," << b << std::endl;
}

void funcion1(std::string s){
	std::cout << "funcion1 string: " << s << std::endl;
}
