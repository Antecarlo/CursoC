
/*

	Mas ejemplos para funciones lambda.

*/


#include <iostream>
#include <functional>


void pruebas(){

	int x = 9, y = 1;

	auto f = [=](){ return x+y; };
	std::cout << "Resultado de ejecutar: f() " << f() << std::endl;


	// Pasando ademas un parametro y sin guardar previamente la funcion. EL parametro va despues de la declaracion
	std::cout << "Resultado de ejecutar directamente la lambda: " << [=](int p){ return (x+y)* p;}(8) << std::endl;

	// Guardando la funcion lambda en std::function
	std::function f2 = [](int a, int b){ return a+b; };
	std::cout << "Resultado de ejecutar: f2() " << f2(5,6) << std::endl;
}


void pruebas_mutable(){
	int c=100;
	
	auto f = [&c]() { return ++c; };
	std::cout << "c: " << f() << std::endl;	

	// Se pueden definir vars. dentro de la captura, pero la lambda debe ser mutable
	auto f2 = [d=0]() mutable { return ++d; };
	std::cout << "Mutable d: " << f2() << std::endl;	
}


int main(){
	
	pruebas();
	pruebas_mutable();

}
