
/*

Ejemplo de uso y definicion de namespace

*/

#include<iostream>

namespace nivel1{
	
	int n;
	void prueba1(){
		std::cout << "en el nivel1" << std::endl;
	}
}

namespace nivel2{
	
	int n=2;
	class Nivel2{
		int i;
		
		public:
			Nivel2(int v=0):i(v){}
			int getI(){return i;}
	};

	namespace nivel3{
	int j=3;
	}
}

int main(){
	nivel1::prueba1();

	{ //Define un ambito
	using namespace nivel2;
	std::cout << "n de nivel2: " << n << std::endl;
	}

	std::cout << "n de nivel 2 (fuera del using): "<< nivel2::n << std::endl;


	using namespace nivel2::nivel3;
	std::cout << "j (de nivel2::nivel3) "<< j << std::endl;

	using namespace nivel1;
	std::cout << "j (de nivel2::nivel3) " << j << "n de nivel1 " << n << std::endl;


}
