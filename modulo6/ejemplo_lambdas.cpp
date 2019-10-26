/*

Funciones lambda

*/

#include<iostream>
#include<functional>
#include<string>

int var_global = 100;

void declararLambdas(){
	int var_local=1;

	std::function f=[](){return var_global * 2;};
	std::cout << "Acceso a global: "<< f() << std::endl;

	//El acceso a una variable local, hay que capturarla.
	auto f2=[var_local](){return var_local * 2;};
	std::cout << "Acceso a local: "<< f2() << std::endl;

	//Acceso por ref.
	auto f3=[& var_local](){var_local+=10;};
	f3();
	std::cout << "Var local ref: " <<var_local << std::endl;

	//Declarar y llamar
	[& var_local](){var_local+=10;}();
	std::cout << "Var local ref: " <<var_local << std::endl;

	//Declarar y llamar sin los parentesis de los parametros (son opcionales)
	[& var_local]{var_local+=10;}();
	std::cout << "Var local ref: " <<var_local << std::endl;

	//Capturar variables por ref:
	int a=0, b=0, c=0;
	auto f4=[&]{a++;b++;c++;};
	f4();
	std::cout << "a = " << a << " b =  "<<b<<" c = "<<c<<std::endl;

	//Capturar variables por copia:
	auto f5=[=]{return a+b+c;};
	std::cout << "a+b+c = " << f5() <<std::endl;
}

int ejecutar(int a, int b, auto f){
	//Recibir por parametro una funcion lambda y se ejecuta
	return f(a,b);
}

auto crear(){
	return[](int a){return a*a;};
}

int cuadrado(int n){
	return n*n;
}


class Number{

	int n;

	public:
		Number (int i=0):n(i){};
		void inc(){this->n++;}
		int get(){return this->n;}
		~Number(){};
};

int main(){
	auto f1= [](int x,int y){return x+y;};
	auto f2= [](int x,int y){return x-y;};

	std::cout << "f1 + " << ejecutar(4,5,f1) << std::endl;
	std::cout << "f2 + " << ejecutar(4,5,f2) << std::endl;

	// Recoger una funcion labmda y ejecutarla:
	auto fcrear = crear();
	std::cout << "fcrear: " << fcrear(10) << std::endl;

	auto fcuadrado = [](int a){return cuadrado(a);};
	std::cout << fcuadrado(10) << std::endl;

	Number num;
	auto f3 = [&num]{num.inc();};
	f3();
	std::cout <<"Number: "<< num.get() << std::endl;

	auto sumar=[](auto a, auto b){return a+b;};
	std::cout << "Sumar: "<< sumar(8,7) << std::endl;
	std::cout << "Sumar: "<< sumar(std::string("8"),std::string("7")) << std::endl;

	//Si quiero modificar una var. definida en la lambda, tiene que ser mutable
	int c=2;
	//auto func=[c=0](){++c;std::cout<<c<<std::endl;return c;}; //ERROR
	auto func=[c=0]()mutable -> int{++c;std::cout<<c<<std::endl;return c;};
	std::cout<< "Mutable: "<<func()<<std::endl;
	std::cout<< "En main: "<< c <<std::endl;

	//Probar parametros opcionales en una lambda:
	auto fop = [](int a=0){return ++a;};
	std::cout << "fop "<<fop()<< std::endl;
	std::cout << "fop "<<fop(10)<< std::endl;

}
















