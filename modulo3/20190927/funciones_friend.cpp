/*

Funciones friend, pueden acceder a todo el contenido de la clase aunque sea privado

*/

#include<iostream>

//class Datos;
//void imprimir(Datos);

class Datos{

	//Privado
	int x,y;

	friend void imprimir(Datos);
	
	public:

		Datos(int x,int y): x(x),y(y){}
		~ Datos(){}
};

void imprimir(Datos d){
	std::cout << d.x <<","<< d.y << std::endl;
}


int main(){
	Datos datos(8,9);

	imprimir(datos);

}
