/*

Aportaciones de C++ a C: PASO POR REFERENCIA, APARTE TENEMOS POR COPIA Y POR PUNTERO

*/


#include<iostream>
#include<string>


void func_copia(int);
void func_ref(int &);
void func_ptr(int *);

void intercambiar(std::string &r1, std::string &r2){
	std::string aux=r1; //Actua como string las referencias, pero se pasan por referencia
	r1=r2;
	r2=aux;
}

int main(){
	int numero=90;
	int numero2 =100;

	//Definir una ref. obligatoriamente hay que inicializar a una variable 
	int &ref = numero;
	
	//Cualquier cambio en la referencia afecta al numero
	ref++;

	std::cout << "Valor de numero: " << numero << std::endl;

	ref=numero2;

	std::cout << "Valor de numero: " << numero << std::endl;


	//Llamadas a las funciones:
	func_copia(8);
	func_ref(numero);
	func_ptr(&numero2);

	//Intercambiar strings
	std::string nombre1="Carlos";
	std::string nombre2="Bea";

	intercambiar(nombre1,nombre2);
	std::cout << "Nombre 1:" << nombre1 << " Nombre 2: " << nombre2 << std::endl;
}


void func_copia(int n){
	std::cout<<"func_copia "<<n<<std::endl;
	n++; //No cambia nada
}
void func_ref(int &n){
	std::cout<<"func_ref "<<n<<std::endl;
	n++; //Cambia el valor de la variable original
}
void func_ptr(int * n){
	std::cout<<"func_ptr "<<*n<<std::endl;
	(*n)++; //Cambia la variable original
}
