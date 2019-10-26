#include <memory>
#include <iostream>

using namespace std;


struct A {

	A(int a){ cout << "Se construye el objeto A" << endl; }
	~A(){ cout << "Se elimina el objeto A" << endl; }
};


struct B {
	int b;

	B(int _b){ cout << "Se construye el objeto B" << endl; b = _b;}
	~B(){ cout << "Se elimina el objeto B" << endl; }
};


void test_copia_ptr_con_shared();
void test_copia_ptr_con_unique();


int main(){

	test_copia_ptr_con_shared();
	test_copia_ptr_con_unique();

}


void test_copia_ptr_con_unique(){

	cout << endl << "Test con unique" << endl;
	auto p = unique_ptr<B>(new B(88));
	
	cout << "Valor de b: " << p->b << endl;
	auto p2 = move(p);

	cout << "Valor de b (en p2, despues de move): " << p2->b << endl;
	cout << "Valor de b (en p, despues de move): " << p2->b << endl;	

}


void test_copia_ptr_con_shared(){

	cout << endl << "Test con shared" << endl;
	auto p = make_shared<A>(0);

	shared_ptr<A> obj(new A(10));

	cout << "use_count() : " << p.use_count() << endl;
	{
		// Abrir otro scope

		auto p2 = p; // Obtiene una copia del puntero.
		cout << "use_count() (en otro scope) : " << p.use_count() << endl;
	}

	cout << "use_count() (en el scope de main) : " << p.use_count() << endl;	
}


