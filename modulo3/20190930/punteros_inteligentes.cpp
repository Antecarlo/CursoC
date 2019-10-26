/*

Prueba con punteros inteligentes

*/

#include<iostream>
#include<memory>

class Punto2D{
	int x,y;

	public:

	Punto2D(int _x=0, int _y=0): x(_x), y(_y){}
	void imprimir(){
		std::cout << "(" << this->x << "," << this->y << ")" << std::endl;
	}
	~Punto2D(){}
};

int main(){
	//Sin parametros llamamos al constructor por defecto
	std::unique_ptr<Punto2D> p = std::make_unique<Punto2D>();
	p->imprimir();

	//Construyendo con parametros
	std::unique_ptr<Punto2D> p2 = std::make_unique<Punto2D>(7,8);
	p2->imprimir();


	//Inferir el tipo destino. C++ asigna un tipo a la variable segun la expresion de la derecha
	auto ptr= std::makeunique<Punto2D>(48,88);
	ptr->imprimir();

	std::cout << std::endl;
}
